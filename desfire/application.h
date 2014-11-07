#ifndef APPLICATION_H
#define APPLICATION_H

#include <nfc/nfc.h>
#include <freefare.h>
#include <QString>
#include "item.h"
#include "card.h"

class Application : public Item
{
public:
  Application(MifareDESFireAID aid, Item* parent = 0);
  ~Application();
  QVariant data(int role) const;
  int select();
  void deselect();

private:
  MifareDESFireAID aid;
  QString name;

};

#endif // APPLICATION_H
