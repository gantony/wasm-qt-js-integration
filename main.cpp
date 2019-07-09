#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "stringcontainer.h"

namespace {

    StringContainer stringContainer;
}
extern "C" {

int int_sqrt(int x) {
  return x;         // I know that's not the right result...
}

void update_string_value(const char* str) {
    QString value(str);
    stringContainer.setProperty("value", value);
}

}

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("stringContainer", &stringContainer);

    update_string_value("This is a test");
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
