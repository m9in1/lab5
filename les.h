#ifndef LES_H
#define LES_H

#include <QString>

 enum enum_type_of_les {Lesson, Examination, Practic};



class les{
public:
    int numb;
    QString lesname;
    QString type_of_les;
    enum_type_of_les etol;
    int lesaud;

};

#endif // LES_H
