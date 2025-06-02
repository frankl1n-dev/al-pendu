#include "aboutpage.h"
#include <QVBoxLayout> // Pour organiser les widgets verticalement
#include <QLabel>      // Pour afficher du texte

AboutPage::AboutPage(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this); // Crée un layout vertical pour la page

    QLabel *titleLabel = new QLabel("Le jeu du PENDU : ", this);
    titleLabel->setAlignment(Qt::AlignCenter);
    titleLabel->setStyleSheet("font-size: 24px; font-weight: bold;");

    QLabel *descriptionLabel1 = new QLabel("Vous avez 7 coups pour trouver le mot cacher! Et si vous réussissez... Et bien on recommence!", this);
    QLabel *descriptionLabel2 = new QLabel("Plus vous avez trouver de mots, plus votre score grandira!!! Alors à vous de jouer!", this);
    QLabel *comptedespoints = new QLabel("COMPTE DES POINTS:", this);
    QLabel *point0 = new QLabel("Mot trouvé sans erreur: ......... 100Pts", this);
    QLabel *point1 = new QLabel("Mot trouvé avec 1 erreur: ......... 50Pts", this);
    QLabel *point2 = new QLabel("Mot trouvé avec 2 erreurs: ......... 35Pts", this);
    QLabel *point3 = new QLabel("Mot trouvé avec 3 erreurs: ......... 25Pts", this);
    QLabel *point4 = new QLabel("Mot trouvé avec 4 erreurs: ......... 15Pts", this);
    QLabel *point5= new QLabel("Mot trouvé avec 5 erreurs: ......... 10Pts", this);
    QLabel *point6 = new QLabel("Mot trouvé avec 6 erreurs: ......... 5Pts", this);

    descriptionLabel1->setAlignment(Qt::AlignCenter);
    descriptionLabel1->setWordWrap(true);
    descriptionLabel2->setAlignment(Qt::AlignCenter);
    descriptionLabel2->setWordWrap(true);
    comptedespoints->setAlignment(Qt::AlignCenter);
    comptedespoints->setWordWrap(true);
    point0->setAlignment(Qt::AlignCenter);
    point0->setWordWrap(true);
    point1->setAlignment(Qt::AlignCenter);
    point1->setWordWrap(true);
    point2->setAlignment(Qt::AlignCenter);
    point2->setWordWrap(true);
    point3->setAlignment(Qt::AlignCenter);
    point3->setWordWrap(true);
    point4->setAlignment(Qt::AlignCenter);
    point4->setWordWrap(true);
    point5->setAlignment(Qt::AlignCenter);
    point5->setWordWrap(true);
    point6->setAlignment(Qt::AlignCenter);
    point6->setWordWrap(true);


    // Ajoute les widgets au layout
    layout->addStretch();
    layout->addWidget(titleLabel);
    layout->addWidget(descriptionLabel1);
    layout->addWidget(descriptionLabel2);
    layout->addSpacing(30);
    layout->addWidget(comptedespoints);
    layout->addSpacing(30);
    layout->addWidget(point0);
    layout->addWidget(point1);
    layout->addWidget(point2);
    layout->addWidget(point3);
    layout->addWidget(point4);
    layout->addWidget(point5);
    layout->addWidget(point6);
    layout->addStretch();

    setLayout(layout);
}
