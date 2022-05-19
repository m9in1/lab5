#include "jsonreader.h"

jsonreader::jsonreader(const QString &filename)
{
  f.open(filename.toLatin1().data());
}

jsonreader::~jsonreader(){
    f.close();
}

std::vector<les> jsonreader::readall(){
    std::vector<les> result;
    nlohmann::json json;
    std::string type[] = {"Lesson", "Examination", "Lab"};
        f >> json;

        for (auto& e: json){
            les l;
            e.at("numb").get_to(l.numb);
            e.at("lesaud").get_to(l.lesaud);

            std::string str;
            e.at("lesname").get_to(str);
            l.lesname = QString::fromStdString(str);
            e.at("type_of_les").get_to(str);
            l.type_of_les = QString::fromStdString(str);
            result.push_back(l);
        }

        return result;
}
