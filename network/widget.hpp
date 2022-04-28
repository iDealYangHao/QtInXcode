//
//  widget.hpp
//  network
//
//  Created by 杨昊 on 2022/4/28.
//

#ifndef widget_hpp
#define widget_hpp

#include <QWidget>
#include <QtCore>
#include <QLabel>
class Widget : public QWidget
{
    Q_OBJECT
    
public:
    Widget(QWidget *parent = nullptr) : QWidget(parent)
    {
        
    }
    ~Widget() {}
};

#endif /* widget_hpp */
