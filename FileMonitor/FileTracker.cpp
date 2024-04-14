#pragma once

#include "FileTracker.h"

FileTracker::FileTracker(const QString& fileName) : 
    _file(fileName)
{
    _existence = _file.exists();
    _size = _file.size();
}

void FileTracker::CheckSize()
{
    if(_file.size() != _size)
        this->SizeChanged();
}

void FileTracker::CkeckExistence()
{
    if(_file.exists() != _existence)
        this->ExistenceChanged();
}