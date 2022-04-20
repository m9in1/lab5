#include "absreader.h"

absreader::absreader(const QString &filename){
f.open(filename.toUtf8().data(), std::ios::in);

}

absreader::~absreader(){
    f.close();
}

std::vector<les> absreader::readall(){

}


absreader& absreader::operator=(absreader&& other){
    f = std::move(other.f);
    return *this;
}

absreader::absreader(absreader&& other){
    f = std::move(other.f);
}
