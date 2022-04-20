#ifndef SPLIT_H
#define SPLIT_H
#include<vector>
#include<QString>

class split
{
public:
    split();
    std::vector<QString> split(QString &str, char zn);
};

#endif // SPLIT_H
