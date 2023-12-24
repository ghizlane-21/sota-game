// image_class.h
#ifndef IMAGE_CLASS_H
#define IMAGE_CLASS_H

#include <QObject>
#include <QList>

class ImageClass : public QObject {
    Q_OBJECT
public:
    explicit ImageClass(QObject *parent = nullptr);
    QString getRandomImage() const;

private:
    QList<QString> stringList;

signals:
    void imageAdded(const QString &imagePath);
    void imageRemoved(const QString &imagePath);
};

#endif // IMAGE_CLASS_H
