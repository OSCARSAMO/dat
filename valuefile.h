/*
 *This file is part of "Desfire Access Tool".
 *
 *"Desfire Access Tool" is free software: you can redistribute it and/or modify
 *it under the terms of the GNU General Public License as published by
 *the Free Software Foundation, either version 3 of the License, or
 *(at your option) any later version.
 *
 *"Desfire Access Tool" is distributed in the hope that it will be useful,
 *but WITHOUT ANY WARRANTY; without even the implied warranty of
 *MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *GNU General Public License for more details.
 *
 *You should have received a copy of the GNU General Public License
 *along with "Desfire Access Tool".  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef VALUEFILE_H
#define VALUEFILE_H

#include "file.h"
#include "valuewidget.h"

class ValueFile : public File
{
public:
  ValueFile(QWidget *parent, MifareTag tag = 0, int iFileNumber = -1);
  ~ValueFile();
  int createFile();
  int save(const char* text);
  void init ();
  char* read();
  int increase();
  int decrease();

private:
  ValueWidget *wid;

protected:
  int setDockWidget();

};

#endif // VALUEFILE_H
