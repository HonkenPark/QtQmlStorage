#ifndef HANDLER_H
#define HANDLER_H


#include <QtDeclarative/QDeclarativeView>
#include <QByteArray>
#include <QObject>
#include <QVariant>

class Handler : public QObject
{
    Q_OBJECT

public:
    Handler();
    ~Handler();

    void ReflashQML();

    Q_INVOKABLE void QMLEvent(); //QML -> Handler  : onActivateMainMenu:HANDLER.QMLEvent();

public slots:


signals:
    void ScreenDataParsing(QVariant); //Handler -> QML

};

#endif // HANDLER_H
