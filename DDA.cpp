#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;

void dda_algo(int ,int,int,int);
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
    dda_algo(x1,x2,y1,y2);
    getch();
    closegraph();
    return 0;
}
void dda_algo(int x1,int x2,int y1,int y2){
    int dx;
    int dy;
    int steps;
    float xi,yi,x,y;
    dx = x2 - x1;
    dy = y2 - y1;
    if (abs(dx) > abs(dy))
        steps = dx;
    else
        steps = dy;
    xi = dx / steps;
    yi = dy / steps;
    x = x1;
    y = y1;
    putpixel(round(x),round(y),1);
    for(int i = 1; i<=steps;i++){
    x = x + xi;
    y = y + yi;
    putpixel(round(x),round(y),1);
    }
}
