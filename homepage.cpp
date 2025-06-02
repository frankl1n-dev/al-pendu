#include "homepage.h"
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>

HomePage::HomePage(QWidget *parent)
    : QWidget(parent) {
    QVBoxLayout *layout = new QVBoxLayout(this); // Crée un layout vertical pour la page

    QLabel *titleLabel = new QLabel("Bienvenue dans le jeu du PENDU", this);
    titleLabel->setAlignment(Qt::AlignCenter);
    titleLabel->setStyleSheet("font-size: 24px; font-weight: bold;");

    QLabel *descriptionLabel1 = new QLabel("Vous avez 7 coups pour trouver le mot cacher! Et si vous réussissez... Et bien on recommence!", this);
    QLabel *descriptionLabel2 = new QLabel("Plus vous avez trouver de mots, plus votre score grandira!!! Alors à vous de jouer!", this);
    QLabel *descriptionLabel3 = new QLabel("PROVERBE: Pas vu, pas pris", this);
    QLabel *descriptionLabel4 = new QLabel("Pris, PENDU!!!", this);
    descriptionLabel1->setAlignment(Qt::AlignCenter);
    descriptionLabel1->setWordWrap(true);
    descriptionLabel2->setAlignment(Qt::AlignCenter);
    descriptionLabel2->setWordWrap(true);
    descriptionLabel3->setAlignment(Qt::AlignCenter);
    descriptionLabel3->setWordWrap(true);
    descriptionLabel4->setAlignment(Qt::AlignCenter);
    descriptionLabel4->setWordWrap(true);


    // Ajoute les widgets au layout
    layout->addStretch();
    layout->addWidget(titleLabel);
    layout->addWidget(descriptionLabel1);
    layout->addWidget(descriptionLabel2);
    layout->addWidget(descriptionLabel3);
    layout->addWidget(descriptionLabel4);
    layout->addSpacing(30);
    layout->addStretch();

    setLayout(layout);
}
