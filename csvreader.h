#ifndef CSVREADER_H
#define CSVREADER_H
#include <QString>
#include <fstream>
#include <iostream>

#include "les.h"
#include "absreader.h"


class csvreader: public absreader
{
   std::ifstream f;
public:
        csvreader(const QString &filename);
        ~csvreader();
        //Оператор присваивания перемещением
        csvreader& operator= (csvreader&& orther);
        // Конструктор перемещения
        csvreader(csvreader&& orther);

        std::vector<QString> split (QString &str, char zn);
        std::vector<les> readall();

        bool is_open(){return f.is_open();}


};

#endif // CSVREADER_H
