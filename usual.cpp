#include "usual.h"

usual::usual()
{

}


QString usual::tostring() {
    return(""
           "Subj: " + lesname + "; Subj aud: " + QString::number(lesaud) + "; Count of people at online conference:  " + QString::number(mb_count_people) );
}
