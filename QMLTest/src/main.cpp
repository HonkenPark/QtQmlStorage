#include <stdio.h>
#include <QtGui/QApplication>
#include <QDeclarativeContext>

#include <QGraphicsObject>
#include <QObject>

#include "hdr/Handler.h"


int main(int argc, char *argv[])
{
    QApplication *app = new QApplication(argc, argv);

    QDeclarativeView *view = new QDeclarativeView();;

    view->setStyleSheet("background:rgb(0,0,0)");
    view->setSource(QUrl("./qml/MainScreen.qml"));
    view->setAttribute(Qt::WA_OpaquePaintEvent);
    view->setAttribute(Qt::WA_NoSystemBackground);
    view->viewport()->setAttribute(Qt::WA_OpaquePaintEvent);
    view->viewport()->setAttribute(Qt::WA_NoSystemBackground);

    Handler cHandler;
    QObject *qmlObject;
    qmlObject = view->rootObject();

    QObject::connect(&cHandler, SIGNAL(ScreenDataParsing(QVariant)), qmlObject, SLOT(screenDataParsing(QVariant)));

    QDeclarativeContext *ctxt = view->rootContext();
    ctxt->setContextProperty( "HANDLER", &cHandler);

    view->show();

    return app->exec();
}
