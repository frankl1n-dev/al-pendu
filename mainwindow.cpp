#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    stackedWidget = new QStackedWidget(this);
    setCentralWidget(stackedWidget);

    gamePage = new Game(this);
    aboutPage = new AboutPage(this);
    reglesPage = new ReglesPage(this);

    homePage = new HomePage(this);

    stackedWidget->addWidget(gamePage);  // Index 0: Page d'accueil
    stackedWidget->addWidget(aboutPage); // Index 1: Page "À propos"
    stackedWidget->addWidget(reglesPage); // Index 1: Page "À propos"

    createMenus();

    stackedWidget->setCurrentWidget(homePage);

    setWindowTitle("LE PENDU");
    resize(800, 600);
}

MainWindow::~MainWindow()
{

}

void MainWindow::createMenus()
{
    menuBar = new QMenuBar(this);
    setMenuBar(menuBar);

    fichierMenu = menuBar->addMenu("Fichier");

    gameAction = new QAction("Nouveau", this);
    scoresAction = new QAction("Scores", this);
    reglesAction = new QAction("Règles", this);

    fichierMenu->addAction(gameAction);
    fichierMenu->addAction(scoresAction);
    fichierMenu->addAction(reglesAction);


    aboutAction = new QAction("À propos", this);
    menuBar->addAction(aboutAction);
    connect(aboutAction, &QAction::triggered, this, &MainWindow::navigateToAboutPage);
    connect(gameAction, &QAction::triggered, this, &MainWindow::navigateToGamePage);
    connect(reglesAction, &QAction::triggered, this, &MainWindow::navigateToReglesPage);
}


void MainWindow::navigateToHomePage()
{
    stackedWidget->setCurrentWidget(homePage);
}

void MainWindow::navigateToGamePage()
{
    stackedWidget->setCurrentWidget(gamePage);
}

void MainWindow::navigateToAboutPage()
{
    stackedWidget->setCurrentWidget(aboutPage);
}
void MainWindow::navigateToReglesPage()
{
    stackedWidget->setCurrentWidget(reglesPage);
}

