// Carte.cpp
#include "Carte.h"

Carte::Carte(QString nom, QString couleur)
    : nom_(nom), couleur_(couleur) {}

QString Carte::getNom() const {
    return nom_;
}

QString Carte::getCouleur() const {
    return couleur_;
}
