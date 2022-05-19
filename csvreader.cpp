#include "csvreader.h"






csvreader::csvreader(const QString& filename)
{
    f.open(filename.toLatin1().data());

}

csvreader::~csvreader(){
    f.close();
}




std::vector<les> csvreader::readall(){
    std::vector<les> allinfo;
    if(f.is_open()){
           while(!f.eof()){
              QString line;
              std::string line_str = line.toUtf8().data();
              std::getline(f,line_str);
              line = QString::fromStdString(line_str);
              if(line==""){
                  break;
              }
              auto v = split(line,';');
              les ls;
              ls.numb = v[0].toInt();
              ls.lesname = v[1];

              ls.lesaud = v[2].toInt();
              ls.type_of_les = v[3];
              allinfo.push_back(ls);
           }
        }else{
            std::cout<<"File corrupt! ";
        }
    return allinfo;
}



std::vector<QString> csvreader::split (QString &str, char zn){
    std::vector<QString> temply;
    int zero=0;
    for(int i =0; i < str.length();i++){
        if(str[i]==zn){
            temply.push_back(str.mid(zero, i-zero));
            //std::cout<<temply[0].toUtf8().data()<<std::endl;
            zero = i+1;
        }
        if(i==str.size()-1){
             temply.push_back(str.mid(zero, i-zero+1));
        }
    }
    return temply;
}


csvreader& csvreader::operator=(csvreader&& orher){
    f = std::move(orher.f);
    return *this;
}

csvreader::csvreader(csvreader&& orther){
    f = std::move(orther.f);
}






