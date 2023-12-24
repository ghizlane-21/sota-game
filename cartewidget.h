#ifndef CARTEWIDGET_H
#define CARTEWIDGET_H

#include <QLabel>
#include <QMouseEvent>
#include <QApplication>

class CarteWidget : public QLabel {
    Q_OBJECT

public:
    CarteWidget(const QString &text, QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    bool isBeingDragged;
    QPoint dragStartPosition;
};

#endif // CARTEWIDGET_H
