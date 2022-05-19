#include "mainwindow.h"
#include "ui_mainwindow.h"


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
    ui->output->GreenText(filename.toUtf8().data());
    //std::cout<<filename.toUtf8().data();
return filename;
}





std::vector<les> MainWindow::forabs(absreader *abs){

    if(abs->is_open()){

        lessons = abs->readall();
    }
    return lessons;
}

void MainWindow::searchLes(){
    ui->output->clear();
     std::string type[] = {"Lesson", "Examination", "Lab"};
    if(filename==QString()){
        MainWindow::browse();
    }
    QString filetype = filename.mid(filename.size()-4,4);
    //absreader* absr;
    if(filetype==".csv"){
        csvreader csv_r(filename);
        forabs(&csv_r);
}

    if(filetype=="json"){
      jsonreader json_r(filename);
      forabs(&json_r);

    }
//    if(absr->is_open()){
//        ui->output->GreenText("fkdddddddddd");
//        //lessons = absr->readall();
//    }



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

 QString filetype = filename.mid(filename.size()-4,4);


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

