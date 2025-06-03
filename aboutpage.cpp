#include "aboutpage.h"
#include <QVBoxLayout> // Pour organiser les widgets verticalement
#include <QLabel>      // Pour afficher du texte

AboutPage::AboutPage(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this); // Crée un layout vertical pour la page

    QLabel *titleLabel = new QLabel("A propos du PENDU : ", this);
    titleLabel->setAlignment(Qt::AlignCenter);
    titleLabel->setStyleSheet("font-size: 24px; font-weight: bold;");

    QLabel *descriptionLabel1 = new QLabel("Vous avez 7 coups pour trouver le mot cacher! Et si vous réussissez... Et bien on recommence!", this);
    QLabel *descriptionLabel2 = new QLabel("Plus vous avez trouver de mots, plus votre score grandira!!! Alors à vous de jouer!", this);
    QLabel *comptedespoints = new QLabel("COMPTE DES POINTS:", this);


    descriptionLabel1->setAlignment(Qt::AlignCenter);
    descriptionLabel1->setWordWrap(true);
    descriptionLabel2->setAlignment(Qt::AlignCenter);
    descriptionLabel2->setWordWrap(true);
    comptedespoints->setAlignment(Qt::AlignCenter);
    comptedespoints->setWordWrap(true);

    // Ajoute les widgets au layout
    layout->addStretch();
    layout->addWidget(titleLabel);
    layout->addWidget(descriptionLabel1);
    layout->addWidget(descriptionLabel2);
    layout->addSpacing(30);
    layout->addWidget(comptedespoints);
    layout->addSpacing(30);
    layout->addStretch();

    setLayout(layout);
}
