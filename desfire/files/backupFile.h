#ifndef BACKUPFILE_H
#define BACKUPFILE_H

#include <nfc/nfc.h>
#include <freefare.h>
#include <QString>
#include "widgets/backupfilewidget.h"
#include "desfire/desfireFile.h"


class BackupFile : public DesfireFile
{
  public:
    BackupFile(uint8_t filenumber, mifare_desfire_file_settings settings, Item* parent);
    ~BackupFile();
    QVariant data(int role) const;

  private:
    QString name;
};

#endif // BACKUPFILE_H
