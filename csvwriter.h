#ifndef CSVWRITER_H
#define CSVWRITER_H
#include <QString>
#include <fstream>
#include <iostream>

#include<les.h>

class csvwriter
{
    std::ofstream f;
public:
    csvwriter(const QString &filename);
   ~csvwriter();

    csvwriter(const csvwriter&) = delete;
    csvwriter& operator=(const csvwriter&) = delete;
    int write(const les new_les);
    bool is_open() const{return f.is_open();}
    csvwriter& operator=(csvwriter&& other);
    csvwriter (csvwriter&& other);
};

#endif // CSVWRITER_H
