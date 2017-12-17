#include <QCoreApplication>
#include "testserver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    TestServer server(1234);

    Q_UNUSED(server);
    return a.exec();
}
