#include "mapwindow.hpp"

#include <QApplication>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QMapboxGLSettings settings;

    MapWindow window(settings);

    window.resize(800, 600);
    window.show();

    return app.exec();
}
