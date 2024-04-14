#pragma once

#include <QVector>
#include <QFileInfo>
#include <QString>

class FileTracker
{
public:
    FileTracker(const QString& fileName);
    void CkeckExistence();
    void CheckSize();
signals:
    bool SizeChanged();
    bool ExistenceChanged();
private:
    size_t _size;
    bool _existence;
    QFileInfo _file;
};