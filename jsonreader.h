#ifndef JSONREADER_H
#define JSONREADER_H
#include"absreader.h"
#include"json.hpp"
#include"les.h"

class jsonreader:public absreader
{
private:
    std::ifstream f;
public:
    jsonreader(const QString &filename);
    ~jsonreader();
     std::vector<les> readall();
     bool is_open(){return f.is_open();}
};

#endif // JSONREADER_H
