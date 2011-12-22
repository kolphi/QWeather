import QtQuick 1.0

Rectangle {
    width: 640
    height: 360
    color: "#ca4242"
    MouseArea {
        x: 0
        y: 0
        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        anchors.topMargin: 0
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }

        Flipable {
            id: flipable1
            x: 27
            y: 25
            width: 300
            height: 300

            Text {
                x: 123
                y: 144
                text: qsTr("Hello World")
                anchors.verticalCenterOffset: 1
                anchors.horizontalCenterOffset: 0
                anchors.centerIn: parent
            }
        }
    }
}
