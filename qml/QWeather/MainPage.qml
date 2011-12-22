import QtQuick 1.1
import com.nokia.meego 1.0

Page {
    width: 640
    height: 360
    tools: commonTools

    Label {
        id: label
        anchors.centerIn: parent
        text: qsTr("Hello world!")
        visible: false
    }

    Button{
        anchors {
            horizontalCenter: parent.horizontalCenter
            top: label.bottom
            topMargin: 10
        }
        text: qsTr("Click here!")
        onClicked: label.visible = true
    }



    Rectangle{
        id: rect
        x: 62
        y: 111
        width: 490
        height: 138
        color: "#ff0000"
    }

}
