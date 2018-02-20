/*
Circle mid line algorithm
Written by : Smrity chaudhary
     Dated : 19-02-2018
*/
#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;

void circle_mid_point(int,int,int);
void plotpoints(int,int,int,int);
int main() {
    /*
    Objective       : Main function of program
    Input parameter : None
    Output          : None
    */
    int xc;
    int yc;
    int radius;
    cout << "Enter xc: ";
    cin >> xc;
    cout << "Enter yc: ";
    cin >> yc;
    cout << "Enter radius: ";
    cin >> radius;
    initwindow(1000,800);
    circle_mid_point(xc,yc,radius);
    getch();
    closegraph();
    return 0;
}
void plotpoints(int xc,int yc,int x,int y){
    /*
    Objective       : Plot the pixel
    Input parameter : center of the circle and current value of x and y
    Output          : Draw the circle
    */
    putpixel(xc+x,yc+y,1);
    putpixel(xc-x,yc+y,1);
    putpixel(xc+x,yc-y,1);
    putpixel(xc-x,yc-y,1);
    putpixel(xc+y,yc+x,1);
    putpixel(xc-y,yc+x,1);
    putpixel(xc+y,yc-x,1);
    putpixel(xc-y,yc-x,1);
}
void circle_mid_point(int xc,int yc, int radius){
    /*
    Objective       : Plot the circle
    Input parameter : center and radius of the circle
    Output          : Draw the circle
    */
    int p,x,y;
    x = 0;
    y = radius;
    plotpoints(xc,yc,x,y);
    p = 1-radius;
    while(x<y){
    if(p<0){
        x = x+1;
    }
    else{
        x = x+1;
        y = y-1;
    }
    if(p<0){
        p = p + 2*(x+1);
        }
    else{
        p = p + 2*(x-y) +1;
    plotpoints(xc,yc,x,y);
    }
    }

}

