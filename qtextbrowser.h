#ifndef QTEXTBROWSER_H
#define QTEXTBROWSER_H


#include <QTextBrowser>

namespace Ui { class MainWindow; }

class MyBrowser : public QTextBrowser
{

public:
    MyBrowser(QWidget* parent);

    void GreenText(QString text);
    void RedText(QString text);
};
#endif // QTEXTBROWSER_H
