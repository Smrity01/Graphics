#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

//void draw_circle();
int main(){
    initwindow(1000,700); //Open window
    POINT p;
    int midx = 500;
    int midy = 350;
    int radius = 100;
    int tempx,tempy;

    setcolor(WHITE);
    circle(midx,midy,radius);
    p.x = tempx = midx;
    p.y = tempy = midy;
    while(!kbhit()){
    GetCursorPos(&p);
    if((pow(p.x-midx-2,2)+pow(p.y-midy-25,2)-pow(radius,2)) >0){
        SetCursorPos(tempx,tempy);
        p.x = tempx;
        p.y = tempy;
    }
    tempx = p.x;
    tempy = p.y;
    }
    getch(); // hold the window
    closegraph(); // Close window
}
