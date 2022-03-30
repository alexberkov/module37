import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.5

Window {
    width: 1280
    height: 720
    visible: true
    title: qsTr("MyPlayer")

    Button {
       id: play
       width: 100
       height: 50
       text: "▶️"
       anchors.bottom: parent.bottom
    }

    Button {
       id: pause
       width: 100
       height: 50
       text: "⏸️"
       anchors.bottom: parent.bottom
       anchors.left: play.right
    }

    Button {
       id: stop
       width: 100
       height: 50
       text: "⏹"
       anchors.bottom: parent.bottom
       anchors.left: pause.right
    }

    Button {
       id: back
       width: 100
       height: 50
       text: "⏪️"
       anchors.bottom: parent.bottom
       anchors.left: stop.right
    }

    Button {
       id: forward
       width: 100
       height: 50
       text: "⏩️"
       anchors.bottom: parent.bottom
       anchors.left: back.right
    }

    ProgressBar {
        width: 780
        height: 50
        anchors.bottom: parent.bottom
        anchors.left: forward.right
        background: Rectangle {
            color: "#e0e0e0"
        }
        value: 0.5
    }
}
