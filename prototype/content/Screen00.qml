
/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/
import QtQuick 2.15
import QtQuick.Controls 2.15
//import MediaPlayerInterface 1.0
import QtMultimedia 5.15
import QtQuick.Layouts 1.11

import QtQuick.Window 2.14

Rectangle {
    width: Constants.width
    height: Constants.height
    opacity: 1
    color: "#000000"
    border.color: "#ffffff"

    property alias imageSource: image.source

    Slider {
        id: slider
        x: 1424
        y: 975
        width: 468
        height: 74
        value: 0.5
    }

    ProgressBar {
        id: progressBar
        x: 56
        y: 918
        width: 1836
        height: 10
        value: 0.5
        clip: false
    }

    RoundButton {
        id: soundButton
        x: 1282
        y: 962
        width: 108
        height: 100
        text: "+"
        highlighted: false
        display: AbstractButton.IconOnly
        flat: false

        Image {
            id: image
            x: 20
            y: 16
            width: 68
            height: 69
            opacity: 0.4
            source: "../images/sound.jpg"
            fillMode: Image.PreserveAspectFit
        }
    }

    ComboBox {
        id: comboBox
        x: 1424
        y: 97
        width: 476
        height: 66
        displayText: qsTr("Favourite Medias List")
        font.bold: true
        font.pointSize: 18
    }

    RoundButton {
        id: playButton
        x: 189
        y: 962
        width: 108
        height: 100
        text: "+"
        Image {
            id: image1
            x: 20
            y: 16
            width: 68
            height: 69
            opacity: 0.4
            source: "../images/play.png"
            fillMode: Image.PreserveAspectFit
        }
        highlighted: false
        flat: false
        display: AbstractButton.IconOnly
    }

    RoundButton {
        id: nextButton
        x: 313
        y: 962
        width: 108
        height: 100
        text: "+"
        Image {
            id: image2
            x: 20
            y: 16
            width: 68
            height: 69
            opacity: 0.4
            source: "../images/nextprev.jpg"
            fillMode: Image.PreserveAspectFit
        }
        highlighted: false
        display: AbstractButton.IconOnly
        flat: false
    }

    RoundButton {
        id: previousButton
        x: 65
        y: 962
        width: 108
        height: 100
        text: "+"
        Image {
            id: image3
            x: 20
            y: 16
            width: 68
            height: 69
            opacity: 0.4
            source: "../images/nextprev.jpg"
            rotation: 180
            fillMode: Image.PreserveAspectFit
        }
        highlighted: false
        flat: false
        display: AbstractButton.IconOnly
    }

    RoundButton {
        id: resetButton
        x: 448
        y: 962
        width: 108
        height: 100
        text: "+"
        Image {
            id: image4
            x: 20
            y: 16
            width: 68
            height: 69
            opacity: 0.4
            source: "../images/reset.jpg"
            fillMode: Image.PreserveAspectFit
        }
        highlighted: false
        display: AbstractButton.IconOnly
        flat: false
    }

    Frame {
        id: frame
        x: 49
        y: 97
        width: 1364
        height: 758
    }

    AnimatedImage {
        id: animatedImage
        x: 57
        y: 103
        width: 1331
        height: 734
        source: "../images/v.gif"
        clip: true
    }

    Text {
        id: text_position
        x: 56
        y: 878
        width: 212
        height: 34
        color: "#ffffff"
        text: qsTr("2.0/27.0")
        font.pixelSize: 26
        verticalAlignment: Text.AlignVCenter
        font.bold: true
    }

    Text {
        id: text_position1
        x: 856
        y: 878
        width: 212
        height: 34
        color: "#ffffff"
        text: qsTr("test.mp3")
        font.pixelSize: 26
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.bold: true
    }

    RoundButton {
        id: favButton
        x: 1153
        y: 962
        width: 108
        height: 100
        text: "+"
        Image {
            id: image5
            x: 20
            y: 16
            width: 68
            height: 69
            opacity: 0.4
            source: "../images/fav.png"
            fillMode: Image.PreserveAspectFit
        }
        highlighted: false
        flat: false
        display: AbstractButton.IconOnly
    }

    Rectangle {
        id: speciphicmedia
        x: 1568
        y: 626
        width: 134
        height: 55
        color: "#c8c3c3"
    }

    Text {
        id: text_mediaList1
        x: 1608
        y: 632
        width: 54
        height: 44
        text: qsTr("5")
        font.pixelSize: 27
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        minimumPixelSize: 24
    }

    Rectangle {
        id: rectangle
        x: 1424
        y: 174
        width: 476
        height: 310
        color: "#c1e5f7"

        ScrollView {
            id: scrollView
            x: 0
            y: 0
            width: 476
            height: 310

            Text {
                id: text1
                x: 0
                y: 0
                width: 476
                height: 310
                text: "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\np, li { white-space: pre-wrap; }\n</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n<ol style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:700;\">/</span><span style=\" font-size:18pt;\">home/root/mediaDir/test.mp3</span></li>\n<li style=\" font-size:18pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/home/root/mediaDir/test.mp3</li>\n<li style=\" font-size:18pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/home/root/mediaDir/test.mp3</li>\n<li style=\" font-size:18pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/home/root/mediaDir/test.mp3</li>\n<li style=\" font-size:18pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/home/root/mediaDir/test.mp3</li>\n<li style=\" font-size:18pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/home/root/mediaDir/test.mp3</li>\n<li style=\" font-size:18pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/home/root/mediaDir/test.mp3</li>\n<li style=\" font-size:18pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/home/root/mediaDir/test.mp3</li>\n<li style=\" font-size:18pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/home/root/mediaDir/test.mp3</li>\n<li style=\" font-size:18pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/home/root/mediaDir/test.mp3</li>\n<li style=\" font-size:18pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/home/root/mediaDir/test.mp3</li>\n<li style=\" font-size:18pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/home/root/mediaDir/test.mp3</li>\n<li style=\" font-size:18pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/home/root/mediaDir/test.mp3</li>\n<li style=\" font-size:18pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/home/root/mediaDir/test.mp3</li>\n<li style=\" font-size:18pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/home/root/mediaDir/test.mp3</li>\n<li style=\" font-size:18pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/home/root/mediaDir/test.mp3</li></ol></body></html>"
                font.pixelSize: 25
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignTop
                textFormat: Text.RichText
                font.bold: true
            }
        }
    }

    Rectangle {
        id: rectangle1
        x: 1424
        y: 523
        width: 404
        height: 71
        color: "#ffffff"

        TextInput {
            id: textInput
            x: 0
            y: 0
            width: 404
            height: 71
            text: qsTr("Text Input")
            font.pixelSize: 23
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            font.bold: true
        }

        RoundButton {
            id: roundButton
            x: 410
            y: 0
            width: 70
            height: 71
            text: ""

            Image {
                id: image7
                x: 9
                y: 14
                width: 52
                height: 44
                source: "../images/search.png"
                fillMode: Image.PreserveAspectFit
            }
        }

        RoundButton {
            id: roundButton1
            x: 410
            y: 92
            width: 70
            height: 71
            text: ""
            Image {
                id: image8
                x: 9
                y: 14
                width: 52
                height: 44
                source: "../images/load.png"
                fillMode: Image.PreserveAspectFit
            }
        }
    }
}
