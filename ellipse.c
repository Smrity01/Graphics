/*
Ellipse
Written by : Smrity chaudhary
     Dated : 10-02-2018
*/
#include<iostream>
#include<graphics.h>
#include<math.h>
#include<conio.h>

using namespace std;

void putellipse1(int x,int y,int x1,int y1) {
    /*
    Objective       : Plot the pixel
    Input parameter : current value of x and y
    Output          : Draw the ellipse
    */
    putpixel(x+x1,y+y1,1);
    putpixel(-x+x1,y+y1,1);
    putpixel(x+x1,-y+y1,1);
    putpixel(-x+x1,-y+y1,1);
}

void putellipse2(int x,int y,int x1,int y1) {
    /*
    Objective       : Plot the pixel
    Input parameter : current value of x and y
    Output          : Draw the ellipse
    */
    putpixel(x+x1,y+y1,1);
    putpixel(x+x1,-y+y1,1);
    putpixel(-x+x1,y+y1,1);
    putpixel(-x+x1,-y+y1,1);
}

void ellipse(int x1,int y1,double a,double b) {
    /*
    Objective       : Plot the ellipse
    Input parameter : coordinates of ellipse and major & minor axis
    Output          : Draw the ellipse
    */
    int x=0,y=b;
    double d1,d2;
    d1=b*b+a*a*(0.25-b);
    putellipse1(x,y,x1,y1);
    while((a*a*(y-0.5))>(b*b*(x+1))) {
	if(d1<0) {
        d1=d1+b*b*((2*x)+3);
    }
	else {
        d1=d1+b*b*((2*x)+3)+a*a*((-2*y)+2);
        y--;
    }
	x++;
	putellipse1(x,y,x1,y1);
    }
    d2=b*b*pow((x+0.5),2)+a*a*(pow(y-1,2))-(a*a*b*b);
    while(y>0) {
	if(d2<0) {
		d2=d2+b*b*((2*x)+2)+a*a*((-2*y)+3);
		x++;
	  	}
	else {
		d2=d2+a*a*((-2*y)+3);
	  	}
	y--;
	putellipse2(x,y,x1,y1);
    }
}

int main() {
    /*
    Objective       : Main function of program
    Input parameter : None
    Output          : None
    */
    int x,y;
    double a,b;
    cout << "Enter the coordinates of ellipse : \n";
    cin >> x;
    cin >> y;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    initwindow(1000,800);
    ellipse(x,y,a,b);
    getch();
    closegraph();
return 0;

}
