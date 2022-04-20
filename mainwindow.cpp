#include "mainwindow.h"
#include "ui_mainwindow.h"








//char filename[] = "D:/MIET/OOP/lab5/datebase.csv";











MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);






}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::browse(){
    filename = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                         "database",
                                                         tr("Base (*.csv *.json)"));

       //Открытие файла
//       if(browsedfilename.right(1) == QString::fromStdString("v")){
//           csvreader csv(browsedfilename);
//           if (csv.is_open()){

//               //Чтение из файла в вектор
//               lessons = csv.readall();
//           }

//       }
    std::cout<<filename.toUtf8().data();
return filename;
}



void MainWindow::searchLes(){
    ui->output->clear();
     std::string type[] = {"Lesson", "Examination", "Lab"};
    if(filename==QString()){
        MainWindow::browse();
    }
    //std::string temp = filename.toUtf8().data();
    QString filetype = filename.mid(filename.size()-4,4);
     //ui->output->GreenText(filetype);
    if(filetype==".csv"){
    csvreader csv_r(filename);

    if(csv_r.is_open()){

        lessons = csv_r.readall();
    }}
    if(filetype=="json"){
        jsonreader j_r(filename);
        if(j_r.is_open()){
            lessons = j_r.readall();
        }
    }

    if(ui->input_search->text()==""){
         ui->output->GreenText("Showing all...");
    }
    else{
     ui->output->GreenText("Searching..");
    }
    for(const auto &l: lessons){
        if(l.lesname==ui->input_search->text()){
            ui->output->append(l.lesname+", "+QString::number(l.lesaud)+", "+l.type_of_les+";");

        }
        if(ui->input_search->text()==""){

             ui->output->append(l.lesname+", "+QString::number(l.lesaud)+", "+l.type_of_les+";");
        }
    }
}



void MainWindow::addLes(){
les l;


l.numb = ui->input_ID->text().toInt();
l.lesname = ui->input_subj->text();
l.lesaud = ui->input_aud->text().toInt();
l.etol = static_cast<enum_type_of_les>(ui->box_type->currentIndex());
//ui->output->append(QString::number(l.numb)+", "+l.lesname+", "+QString::number(l.lesaud)+", "+QString::number(l.etol)+";");



 QString filetype = filename.mid(filename.size()-4,4);

//ui->output->append(l.lesname+", "+QString::number(l.lesaud)+", "+l.type_of_les+";");

if(filename==QString()){
    MainWindow::browse();
}
if( filetype!=".csv"){
    ui->output->RedText("Choose CSV file for writing!");

}else{
csvwriter csv_w(filename);
int nerror = csv_w.write(l);
if(nerror == 0){
ui->output->GreenText(l.lesname+" writed!");
}else{
    ui->output->RedText("Write error!");
}
}
}


//       if(fileName.right(1) == QString::fromStdString("n")){
//           JSONReader json(fileName);
//           if (json.is_open()){

//               //Чтение из файла в вектор
//               employes = json.readAll();
//           }


