#ifndef JSONREADER_H
#define JSONREADER_H
#include"absreader.h"
#include"json.hpp"
#include"les.h"

class jsonreader:public absreader
{
public:
    jsonreader(const QString &filename);
    ~jsonreader();
     std::vector<les> readall();
};

#endif // JSONREADER_H
