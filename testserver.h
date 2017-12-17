#ifndef TESTSERVER_H
#define TESTSERVER_H

#include <QtCore/QObject>
#include <QtCore/QList>
#include <QtCore/QByteArray>

QT_FORWARD_DECLARE_CLASS(QWebSocketServer)
QT_FORWARD_DECLARE_CLASS(QWebSocket)

class TestServer : public QObject
{
    Q_OBJECT
public:
    explicit TestServer(quint16 port, QObject *parent = Q_NULLPTR);
    virtual ~TestServer();

private Q_SLOTS:
    void onNewConnection();
    void processTextMessage(QString message);
    void processBinaryMessage(QByteArray message);
    void socketDisconnected();

private:
    QWebSocketServer *m_pWebSocketServer;
    QList<QWebSocket *> m_clients;

};

#endif // TESTSERVER_H
