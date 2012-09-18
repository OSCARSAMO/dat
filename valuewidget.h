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

#ifndef VALUEWIDGET_H
#define VALUEWIDGET_H

#include <QWidget>

namespace Ui {
  class ValueWidget;
}

class ValueWidget : public QWidget
{
  Q_OBJECT

public:
  explicit ValueWidget(QWidget *parent = 0);
  ~ValueWidget();
  void init(int freeMem);
  int32_t upperLimit;
  int32_t lowerLimit;
  int32_t value;
  bool limitedCreditEnable;

private slots:
  void setValULimit(int i);
  void setValLLimit(int i);
  void setValVal(int i);
  void setlimitedCreditEnable(bool i);

private:
  Ui::ValueWidget *ui;


};

#endif // VALUEWIDGET_H
