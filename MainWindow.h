//
// Created by azari on 07.09.2021.
//

#ifndef IMAGE_TRANSFORM_MAINWINDOW_H
#define IMAGE_TRANSFORM_MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QPushButton>
#include "LabImageViewer.h"
#include "HsvSlider.h"

class MainWindow : public QMainWindow {
Q_OBJECT

private:
    LabImageViewer *imageViewer;
    HsvSlider *hsvSlider;
    QPushButton *histogramButton;


    void showMessageBox(const QString &msgText);

public:
    MainWindow(const QString &title, int minW, int minH, QWidget *parent = nullptr);
    ////~MainWindow() = default;

private slots:
    void onPressHistogram();

    void onPressLoadImage();

    void onPressSaveImage();

    void onPressGabor();

    void onPressSobel();


};


#endif //IMAGE_TRANSFORM_MAINWINDOW_H
