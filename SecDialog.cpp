#include "SecDialog.h"

SecDialog::SecDialog(QWidget *parent) : QDialog(parent) {
    // Constructor implementation

    // Set the background image using a stylesheet
    QString styleSheet = "background-color: #004d00;";
    this->setStyleSheet(styleSheet);
    this->setFixedSize(1000, 700);
}

SecDialog::~SecDialog() {
    // Destructor implementation
    // Any cleanup code you may need
}
