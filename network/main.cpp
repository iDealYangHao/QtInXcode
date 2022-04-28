//
//  main.cpp
//  network
//
//  Created by 杨昊 on 2022/4/28.
//

#include <iostream>
#include "widget.hpp"
#include <QApplication>
#include "mainwindow.hpp"
int main(int argc, char * argv[])
{
    QApplication a(argc, argv);
    
    window w;
    w.show();
    
    return a.exec();
}
