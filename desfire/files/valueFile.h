#ifndef VALUEFILE_H
#define VALUEFILE_H

#include <nfc/nfc.h>
#include <freefare.h>
#include <QString>
#include "widgets/valuefilewidget.h"
#include "desfire/desfireFile.h"


class ValueFile : public DesfireFile
{
  public:
    ValueFile(uint8_t filenumber, mifare_desfire_file_settings settings, Item* parent);
    ~ValueFile();
    QVariant data(int role) const;

  private:
    QString name;
};

#endif // VALUEFILE_H
