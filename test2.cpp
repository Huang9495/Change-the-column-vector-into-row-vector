#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <opencv/cv.h>
using namespace std;

const int ROW = number;
const int VOL = number;
ofstream datas;
 
int main(){
    double d[ROW][VOL];
    
    //打开文件
    ifstream in("file_name");
    
    //读数据。。
    for(int i = 0; i < ROW; ++i){
        for(int j = 0; j < VOL; ++j){
            in >> d[i][j];
        }
    }
    
    //关闭文件
    in.close();
    
    //输出结果
    //change the column vetor into row vector
    datas.open("output_route");
    
    
    for(int i = 0; i < ROW; ++i){
        for(int j = 0; j < VOL; ++j){
            datas<<d[i][j]<<" ";
        }
        datas<<endl;
    }
    datas.close();
    return 0;
}
