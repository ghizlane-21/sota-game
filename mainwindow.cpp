#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // title of the game
    setWindowTitle("Sota");

    // icon
    setWindowIcon(QIcon(":/gfx/icon.ico"));

    // Set the background image using a stylesheet
    QString styleSheet = "background-color: #004d00;";
    this->setStyleSheet(styleSheet);

    // Create a QLabel for the centered image
    QLabel *centeredImage = new QLabel(this);
    centeredImage->setPixmap(QPixmap(":/gfx/home.png").scaled(600, 600, Qt::KeepAspectRatio));  // Replace with your image path
    centeredImage->setAlignment(Qt::AlignCenter);

    // Create "Play Now" button
    QPushButton *playNowButton = new QPushButton("Play Now", this);
    playNowButton->setStyleSheet("QPushButton {"
                                 "background-color: #FFF500;"
                                 "border: 1px solid #FF0000;"
                                 "border-radius: 20px;"
                                 "padding-top: 8px;"
                                 "padding-bottom: 8px;"
                                 "padding-left: 40px;"
                                 "padding-right: 40px;"
                                 "font-size: 20px;"
                                 "font-family: 'Times New Roman', serif;"
                                 "}"
                                 "QPushButton:hover {"
                                 "background-color: lightyellow;"
                                 "}");

    // Connect the "Play Now" button click to the onPlayNowClicked() slot
    connect(playNowButton, &QPushButton::clicked, this, &MainWindow::onPlayNowClicked);
    // Create QLabel for white text
    QLabel *whiteTextLabel = new QLabel("Sota", this);
    whiteTextLabel->setStyleSheet("color: white;"
                                  "font-size: 40px;"
                                  "font-family: 'Times New Roman', serif;");  // Set the text color to white

    // Create a QVBoxLayout to center the image and add the button
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addSpacing(20);  // Adjust the spacing as needed
    layout->addWidget(centeredImage, 0, Qt::AlignCenter);  // Align the image to the center
    layout->addWidget(whiteTextLabel, 0, Qt::AlignCenter);  // Align the white text to the center
    layout->addWidget(playNowButton, 0, Qt::AlignCenter);  // Align the button to the center

    layout->setAlignment(Qt::AlignTop | Qt::AlignHCenter);

    // Set the central widget of the main window to a QWidget with the QVBoxLayout
    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);
}

void MainWindow::onPlayNowClicked()
{
    // Open the second dialog when the button is clicked
    hide();
    secDialog = new SecDialog(this);
    secDialog->show(); // Use show() to make it a modeless dialog
}



MainWindow::~MainWindow()
{
    delete ui;
}
