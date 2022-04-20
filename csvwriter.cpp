#include "csvwriter.h"
#include "les.h"
#include<string>
#include <fstream>


csvwriter::csvwriter(const QString &filename)
{
f.open(filename.toLatin1().data(), std::ios::out | std::ios::app);

}
csvwriter::~csvwriter(){
    f.close();

}

int csvwriter::write(const les new_les){
    std::string type[] = {"Lesson", "Examination", "Lab"};
   if(f.is_open()){
//       std::string temp;
//       f>>temp;
//       if(temp[temp.size()-1]==';'){
//           f<<std::endl;
//       }

       f<<new_les.numb<<';'<<new_les.lesname.toLatin1().data()<<';'<<new_les.lesaud<<";"<<new_les.etol<<std::endl;
       return 0;
   }else{
       return -1;
   }
   //std::cout<<new_les.numb;



   }


csvwriter& csvwriter::operator=(csvwriter&& other){
    f = std::move(other.f);
    return *this;
}

csvwriter::csvwriter(csvwriter&& other){
    f = std::move(other.f);
}
