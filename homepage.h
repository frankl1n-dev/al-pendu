#ifndef HOMEPAGE_H
#define HOMEPAGE_H
#include <QVBoxLayout>
#include <QLabel>
#include <QWidget>

class HomePage: public QWidget
{
    Q_OBJECT

public:
    explicit HomePage(QWidget *parent = nullptr);

private:
    QLabel *homeImage;

};

#endif // HOMEPAGE_H
