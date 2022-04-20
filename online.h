#ifndef ONLINE_H
#define ONLINE_H

#include "les.h"
class online: public les{
    public:
    int mb_count_people_online;
    online();

    QString tostring();
};
#endif // ONLINE_H
