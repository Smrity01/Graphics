#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;

void bresenham_line(int ,int,int,int);
int main() {
    int x1;
    int x2;
    int y1;
    int y2;
    cout << "Enterx1: ";
    cin >> x1;
    cout << "Enterx2: ";
    cin >> x2;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter y2: ";
    cin >> y2;
    initwindow(1000,800);
    bresenham_line(x1,x2,y1,y2);
    getch();
    closegraph();
    return 0;
}
void bresenham_line(int x1 ,int x2,int y1,int y2){
    int dx,dy,x,y,xlast,p;
    dx = abs(x1-x2);
    dy = abs(y1-y2);
    p = 2*(dy - dx);
    if (x1 > x2){
        x = x2;
        y = y2;
        xlast = x1;
    }
    else{
        x = x1;
        y = y1;
        xlast = x2;
    }
    putpixel(x,y,1);
    while(x < xlast){
        x = x+1;
    if(p<0){
        p = p + 2*dy;
        }
    else{
        y = y+1;
        p = p+2*(dy-dx);
    }
    putpixel(x,y,1);
    }
}
