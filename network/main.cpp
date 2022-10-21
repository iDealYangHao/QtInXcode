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
#include <opencv2/opencv.hpp>
#include <core.hpp>

using namespace cv;
using namespace std;
int main(int argc, char * argv[])
{
//    QApplication a(argc, argv);
//
//    window w;
//    w.show();
    Mat src = imread("/Users/yanghao/myProject/Pictures/IMG_0023.JPG",1);    //第一个参数：图片路径   第二个参数 flag(具体功能可以点击去查看)
        namedWindow("input image1",256);  //  新建一个窗口显示图片，第一个参数：窗口标题   第二个参数  图片适应窗口的方法
        imshow("input image",src);  //进行显示
        waitKey(0);     //让窗口停留时间， 0：一直停留    其他数字 ：xxx/ms
        destroyAllWindows();  //  释放内存
        cout << "hello  OpenCV"<<endl;
    return 0;
}
