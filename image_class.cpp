// image_class.cpp
#include "image_class.h"
#include <QCoreApplication>
#include <QMap>
#include <QString>
#include <QDebug>
#include <QTime>
#include <QRandomGenerator>

ImageClass::ImageClass(QObject *parent)
    : QObject(parent)
{
    stringList << ":/../../Pictures/cards - Copie/00.png" << ":/newcarte/cards/01.gif" <<":/../../Pictures/cards - Copie/01.png"
               << ":/../../Pictures/cards - Copie/02.png" << ":/../../Pictures/cards - Copie/03.png" <<":/../../Pictures/cards - Copie/04.png"
               << ":/../../Pictures/cards - Copie/06.png" << ":/../../Pictures/cards - Copie/07.png" <<":/../../Pictures/cards - Copie/08.png"
               << ":/../../Pictures/cards - Copie/09.png" << ":/../../Pictures/cards - Copie/10.png" <<":/../../Pictures/cards - Copie/11.png"
               << ":/../../Pictures/cards - Copie/12.gif" << ":/../../Pictures/cards - Copie/13.png" <<":/../../Pictures/cards - Copie/14.png"
               << "" << ":/../../Pictures/cards - Copie/15.png" <<":/../../Pictures/cards - Copie/16.png"
               << ":/../../Pictures/cards - Copie/17.png" << ":/../../Pictures/cards - Copie/18.png" <<":/../../Pictures/cards - Copie/19.png"
               << ":/../../Pictures/cards - Copie/20.png" << ":/../../Pictures/cards - Copie/21.png" <<":/../../Pictures/cards - Copie/22.png"
               << ":/../../Pictures/cards - Copie/23.png" << ":/../../Pictures/cards - Copie/24.png" <<":/../../Pictures/cards - Copie/25.png"
               << ":/../../Pictures/cards - Copie/26.png" << ":/../../Pictures/cards - Copie/27.png" <<":/../../Pictures/cards - Copie/28.png"
               << ":/../../Pictures/cards - Copie/29.png" << ":/../../Pictures/cards - Copie/30.png" <<":/../../Pictures/cards - Copie/31.png"
               << ":/../../Pictures/cards - Copie/32.png" << ":/../../Pictures/cards - Copie/34.png" <<":/../../Pictures/cards - Copie/35.png"
               <<":/../../Pictures/cards - Copie/36.png"<<":/../../Pictures/cards - Copie/37.png"<<":/../../Pictures/cards - Copie/38.png"<<":/../../Pictures/cards - Copie/39.png";
}
QString ImageClass::getRandomImage() const {
    // Initialiser le générateur de nombres aléatoires avec une graine basée sur l'horloge
    QRandomGenerator rng(QTime::currentTime().msec());

    // Obtenir un index aléatoire
    int randomIndex = rng.bounded(stringList.size());

    // Retourner l'image correspondante
    return stringList.at(randomIndex);
}
