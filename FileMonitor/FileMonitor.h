#pragma once
#include "FileTracker.h"
#include <QVector>

class FileMonitor
{
    FileMonitor(const QString& _names);
public slots:
    void OnSizeChanged();
    void OnExistenceChanged();
private:
    QVector<FileTracker> _trackers;
    QVector<QString> _names;
}