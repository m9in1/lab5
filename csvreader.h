#ifndef CSVREADER_H
#define CSVREADER_H
#include <QString>
#include <fstream>
#include <iostream>

#include<les.h>
#include "absreader.h"


class csvreader: public absreader
{
   //std::ifstream f;
public:
    csvreader(const QString &filename);
    ~csvreader();

  std::vector<QString> split (QString &str, char zn);
  std::vector<les> readall();



  //  std::vector<QString> split(QString &str, char zn);




};

#endif // CSVREADER_H
