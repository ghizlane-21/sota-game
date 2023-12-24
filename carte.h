// Carte.h
#ifndef CARTE_H
#define CARTE_H

#include <QString>

class Carte {
public:
    Carte(QString nom, QString couleur);
    QString getNom() const;
    QString getCouleur() const;

private:
    QString nom_;
    QString couleur_;
};

#endif // CARTE_H
