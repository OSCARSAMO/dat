#ifndef DEVICE_H
#define DEVICE_H

#include <nfc/nfc.h>
#include <freefare.h>
#include <QString>
#include <QVector>
#include "item.h"
#include "card.h"


class Device : public Item
{
public:
  Device(nfc_device *_device = 0, Item* parent = 0);
  ~Device();
  QVariant data(int role) const;
  int select();
  void deselect();
  nfc_device* getDevice();

private:
  nfc_device *device;
};

#endif // CARD_H