#ifndef ABSREADER_H
#define ABSREADER_H


#include <QString>
#include <fstream>
#include <iostream>

#include<les.h>

class absreader
{
protected:
 std::fstream f;

public:

    absreader(const QString &filename);
    ~absreader();
      absreader(const absreader&) = delete;
    absreader& operator= (absreader&& other);
    absreader(absreader&& other);

    virtual std::vector<les> readall();
    virtual bool is_open() const{return f.is_open();};




};

#endif // ABSREADER_H
