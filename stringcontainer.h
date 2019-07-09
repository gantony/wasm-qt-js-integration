#ifndef STRINGCONTAINER_H
#define STRINGCONTAINER_H

#include <QObject>

class StringContainer : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString value MEMBER value_ NOTIFY valueChanged)

public:
    explicit StringContainer(QObject *parent = nullptr);

signals:
    void valueChanged();

public slots:

private:
    QString value_;
};

#endif // STRINGCONTAINER_H
