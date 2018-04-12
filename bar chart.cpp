#include<graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;

void draw_barchart();
int main(){
    initwindow(1000,700); //Open window
    draw_barchart();
    getch(); // hold the window
    closegraph(); // Close window
}
void draw_barchart(){
    //Y-axis
    line(300,600,300,200);
    //X-axis
    line(300,600,800,600);
    //Bar 1
    setfillstyle(HATCH_FILL,YELLOW);
    bar(325,600,375,400);
    //Bar 2
    setfillstyle(WIDE_DOT_FILL,CYAN);
    bar(400,600,450,250);
    //Bar 3
    setfillstyle(SLASH_FILL,GREEN);
    bar(475,600,525,300);
    //Bar 4
    setfillstyle(BKSLASH_FILL,BLUE);
    bar(550,600,600,450);
    //Bar 5
    setfillstyle(INTERLEAVE_FILL,RED);
    bar(625,600,675,200);

}
