#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <aboutpage.h>
#include <homepage.h>
#include <game.h>
#include <reglespage.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void navigateToGamePage();
    void navigateToAboutPage();
    void navigateToHomePage();
    void navigateToReglesPage();
private:
    void createMenus();

    Ui::MainWindow *ui;
    QStackedWidget *stackedWidget; // Widget pour empiler les pages
    Game *gamePage;         // Pointeur vers la page d'accueil
    AboutPage *aboutPage;       // Pointeur vers la page "À propos"
    HomePage *homePage;
    ReglesPage *reglesPage;

    QMenuBar *menuBar;
    QMenu *fichierMenu;
    QMenu *aboutMenu;
    QAction *gameAction;
    QAction *aboutAction;
    QAction *reglesAction;
    QAction *scoresAction;
};
#endif // MAINWINDOW_H
