#pragma once

#include <QVector>
#include <QFileInfo>
#include <QString>

class FileTracker
{
public:
    FileTracker(const QString& fileName);
    bool IsExist();
    bool IsSizeChanged();
signals:
    bool SizeChanged();
    bool ExistenceChanged();
private:
    QString _fileName;
    size_t _fileSize;
    bool _existense;
};