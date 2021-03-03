//////////////////////////////////////////////////////////////////////////////////////
//    akashi - a server for Attorney Online 2                                       //
//    Copyright (C) 2020  scatterflower                                             //
//                                                                                  //
//    This program is free software: you can redistribute it and/or modify          //
//    it under the terms of the GNU Affero General Public License as                //
//    published by the Free Software Foundation, either version 3 of the            //
//    License, or (at your option) any later version.                               //
//                                                                                  //
//    This program is distributed in the hope that it will be useful,               //
//    but WITHOUT ANY WARRANTY; without even the implied warranty of                //
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                 //
//    GNU Affero General Public License for more details.                           //
//                                                                                  //
//    You should have received a copy of the GNU Affero General Public License      //
//    along with this program.  If not, see <https://www.gnu.org/licenses/>.        //
//////////////////////////////////////////////////////////////////////////////////////
#ifndef AREA_DATA_H
#define AREA_DATA_H

#include "include/logger.h"

#include <QMap>
#include <QString>
#include <QSettings>
#include <QDebug>

class Logger;
class AreaData {
  public:
    AreaData(QStringList p_characters, QString p_name, int p_index);

    struct Evidence {
        QString name;
        QString description;
        QString image;
    };

    QString name;
    int index;
    QMap<QString, bool> characters_taken;
    QList<Evidence> evidence;
    int player_count;
    QString status;
    QList<int> owners;
    QList<int> invited;
    enum LockStatus {
      FREE,
      LOCKED,
      SPECTATABLE
    };
    LockStatus locked;
    QString background;
    bool is_protected;
    bool showname_allowed;
    bool iniswap_allowed;
    bool bg_locked;
    QString document;
    int def_hp;
    int pro_hp;
    Logger* logger;
};

#endif // AREA_DATA_H
