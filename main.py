import sys
import csv
from qtpy import QtWidgets, QtGui

from ui.mainwindow import Ui_MainWindow
from ui.dialogdefaultvalues import Ui_Dialog
from ui.dialoginfo import Ui_Dialog as Ui_DialogInfo

app = QtWidgets.QApplication(sys.argv)


#InfoFenster
class DialogInfo(QtWidgets.QDialog):
    def __init__(self, parent=None):
        super().__init__(parent)

        self.uiD = Ui_DialogInfo()
        self.uiD.setupUi(self)
        self.setWindowTitle("Info")
        self.setWindowIcon(QtGui.QIcon("icon.png"))

#StandardwertFenster
class DialogDefaultValues(QtWidgets.QDialog):
    def __init__(self, parent=None):
        super().__init__(parent)

        self.uiD = Ui_Dialog()
        self.uiD.setupUi(self)

        self.setWindowTitle("Standardwerte festlegen")
        self.setWindowIcon(QtGui.QIcon("icon.png"))
        dict = self.readDefaultFile()
        self.uiD.lineEditSeparator.setText(dict["separator"])
        self.uiD.spinBoxSection.setValue(int(dict["section"]))
        self.uiD.checkBoxDouble.setCheckState(int(dict["double"]))
        self.uiD.checkBoxOutput.setCheckState(int(dict["output"]))
        self.uiD.lineEditPath.setText(dict["path"])

        self.uiD.buttonBox.accepted.connect(self.okButton)

    def okButton(self):
        self.writeDefaultFile()

    def readDefaultFile(self):
        dictDefaultValues = {}
        with open("defaultvalues.txt", "r", newline='', encoding="UTF-8") as file:
            for line in file:
                values = line.strip().split("@")
                dictDefaultValues[values[0]] = values[1]
        return dictDefaultValues

    def writeDefaultFile(self):
        dictDefaultValues = {
            "separator": self.uiD.lineEditSeparator.text().strip(),
            "section": self.uiD.spinBoxSection.value(),
            "double": self.uiD.checkBoxDouble.checkState(),
            "output": self.uiD.checkBoxOutput.checkState(),
            "path": self.uiD.lineEditPath.text().strip()
        }
        with open("defaultvalues.txt", "w", newline='', encoding="UTF-8") as csvfile:
            file = csv.writer(csvfile, delimiter='@')
            for line in dictDefaultValues.items():
                file.writerow(line)

#Hauptfenster
class MainWindow(QtWidgets.QMainWindow):
    def __init__(self, parent=None):
        super().__init__(parent)

        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)

        self.setWindowTitle("rearRange")
        self.setWindowIcon(QtGui.QIcon("icon.png"))
        self.ui.plainTextOutput.hide()
        self.ui.labelOutput.hide()

        self.setValuesMainWindow()

        self.ui.sortedButton.clicked.connect(self.sortedButton)
        self.ui.resetButton.clicked.connect(self.reset)
        self.ui.actionStandardwerte_festlegen.triggered.connect(self.openDefaultValues)
        self.ui.actionInfo.triggered.connect(self.openInfo)
        self.ui.actionAktualisieren.triggered.connect(self.setValuesMainWindow)

        self.b = True

    def setValuesMainWindow(self):
        dict = self.readDefaultFile()
        self.ui.lineEditSeparator.setText(dict["separator"])
        self.ui.spinBoxSection.setValue(int(dict["section"]))
        self.ui.checkBoxDouble.setCheckState(int(dict["double"]))
        self.ui.checkBoxSafeFile.setCheckState(int(dict["output"]))

    def openInfo(self):
        self.i = DialogInfo()
        self.i.show()

    def openDefaultValues(self):
        self.d = DialogDefaultValues()
        self.d.show()

    def readDefaultFile(self):
        dictDefaultValues = {}
        with open("defaultvalues.txt", "r", newline='', encoding="UTF-8") as file:
            for line in file:
                values = line.strip().split("@")
                dictDefaultValues[values[0]] = values[1]
        return dictDefaultValues

    def sortedButton(self):
        if self.ui.plainTextInput.document().toPlainText() == "":
            self.ui.plainTextInput.insertPlainText("Bitte zuerst Werte zum Umwandeln eintragen.")
            self.ui.plainTextInput.selectAll()
        else:
            if self.b == True:
                self.b = False
                if self.ui.checkBoxSafeFile.checkState() == 2:
                    self.saveFile()
                else:
                    if self.ui.checkBoxDouble.checkState() == 0:
                        self.sortWithDouble()
                    else:
                        self.sortWithoutDouble()

    def sortWithDouble(self):
        self.ui.plainTextInput.hide()
        self.ui.labelInput.hide()
        sep = self.ui.lineEditSeparator.text()
        section = self.ui.spinBoxSection.value()
        itemList = []
        counter = 1
        for row in self.ui.plainTextInput.document().toPlainText().split("\n"):
            if row == "":
                continue
            else:
                if counter >= section:
                    itemList.append(row + "\n")
                    counter = 1
                else:
                    itemList.append(row + sep)
                    counter = counter + 1
        self.ui.plainTextOutput.insertPlainText("".join(itemList))
        self.ui.plainTextOutput.show()
        self.ui.labelOutput.show()
        return itemList

    def sortWithoutDouble(self):
        self.ui.plainTextInput.hide()
        self.ui.labelInput.hide()
        sep = self.ui.lineEditSeparator.text()
        section = self.ui.spinBoxSection.value()
        s = set()
        for row in self.ui.plainTextInput.document().toPlainText().split("\n"):
            s.add(row)
        sitemlist = []
        counter = 1
        for row in sorted(s):
            if row == "":
                continue
            else:
                if counter >= section:
                    sitemlist.append(row + "\n")
                    counter = 1
                else:
                    sitemlist.append(row + sep)
                    counter = counter + 1
        self.ui.plainTextOutput.insertPlainText("".join(sitemlist))
        self.ui.plainTextOutput.show()
        self.ui.labelOutput.show()
        return sitemlist

    def saveFile(self):
        path = self.readDefaultFile()["path"] + "rearRangeOutputFile.txt"
        if self.ui.checkBoxDouble.checkState() == 0:
            self.ui.plainTextOutput.insertPlainText("Datei erfolgreich gespeichert unter:\n" + path + "\n\n")
            with open(path, "w", newline='', encoding="UTF-8") as file:
                list = self.sortWithDouble()
                file.write("".join(list))
        else:
            self.ui.plainTextOutput.insertPlainText("Datei erfolgreich gespeichert unter:\n" + path + "\n\n")
            with open(path, "w", newline='', encoding="UTF-8") as file:
                list = self.sortWithoutDouble()
                file.write("".join(list))

    def reset(self):
        self.b = True
        self.ui.plainTextOutput.clear()
        self.ui.plainTextInput.clear()
        self.ui.plainTextOutput.hide()
        self.ui.labelOutput.hide()
        self.ui.plainTextInput.show()
        self.ui.labelInput.show()


window = MainWindow()
window.show()

sys.exit(app.exec_())
