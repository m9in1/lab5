#ifndef ABSREADER_H
#define ABSREADER_H


#include <QString>
#include <fstream>
#include <iostream>

#include"les.h"

#include <vector>




class absreader
{
public:
    virtual ~absreader(){};
    virtual std::vector<les> readall() = 0;
    virtual bool is_open() = 0;
};

#endif // ABSREADER_H
