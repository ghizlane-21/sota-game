// CarteWidget.cpp
#include "CarteWidget.h"
#include <QMimeData>
#include <QDrag>

CarteWidget::CarteWidget(const QString &text, QWidget *parent) : QLabel(text, parent) {
    setAlignment(Qt::AlignCenter);
    setStyleSheet("QLabel { border: 1px solid black; }");
}

void CarteWidget::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        dragStartPosition = event->pos();
    }

    QLabel::mousePressEvent(event);
}

void CarteWidget::mouseMoveEvent(QMouseEvent *event) {
    if (event->buttons() & Qt::LeftButton) {
        int distance = (event->pos() - dragStartPosition).manhattanLength();
        if (distance > QApplication::startDragDistance()) {
            QDrag *drag = new QDrag(this);
            QMimeData *mimeData = new QMimeData;
            drag->setMimeData(mimeData);
            drag->exec(Qt::MoveAction);
        }
    }
    QLabel::mouseMoveEvent(event);  // Déplacez cette ligne à l'intérieur du bloc if
}



void CarteWidget::mouseReleaseEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        // Traitez l'événement de relâchement de la souris si nécessaire
    }

    QLabel::mouseReleaseEvent(event);
}
