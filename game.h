#ifndef GAME_H
#define GAME_H
#include <QWidget>
#include <QPushButton>


// je peux declare d'autres ici

class Game : public QWidget { 
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    ~Game();

signals:

public slots:

private:

};

#endif // GAME_H
