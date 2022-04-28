//
//  mainwindow.hpp
//  network
//
//  Created by 杨昊 on 2022/4/28.
//

#ifndef mainwindow_hpp
#define mainwindow_hpp

#include <QWidget>

class window : public QWidget
{
  Q_OBJECT
public:
    window(QWidget *parent = nullptr);

    ~window()
    {
        
    }
};
#endif /* mainwindow_hpp */
