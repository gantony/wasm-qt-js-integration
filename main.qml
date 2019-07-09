import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    color: "lightgrey"
    Text {
        anchors.fill: parent
        anchors.margins: 50
        text: stringContainer.value
    }
}
