#include "open.h"

open::open()
{

}

QString open::tostring() {
    return(""
           "Subj: " + lesname + "; Subj aud: " + QString::number(lesaud) + "; Count of people at open conference:  " + QString::number(mb_count_newpeople) );
}
