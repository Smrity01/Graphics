#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;

void draw_smiley(int x,int y);
int main(){
    initwindow(1000,700); //Open window
    //draw_barchart();
    while(1){
    srand(time(NULL));
    int x = rand()%900;
    int y = rand()%600;

    if(x < 100) {
        x += 100;
    }
    else if(x>800){
    x -= 100;
    }
    if(y < 100) {
        y += 100;
    }
    else if(y>600){
    y -= 100;
    }

    draw_smiley(x,y);
    delay(1000);
    cleardevice();
    }
    getch(); // hold the window
    closegraph(); // Close window
}
void draw_smiley(int x,int y){
    int radius = 100;
    //face
    setcolor(YELLOW);
    circle(x,y,radius);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(x,y,YELLOW);
    //eye
    setcolor(BLACK);
    circle(x-40,y-40,14);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(x-40,y-40,BLACK);
    //eye
    setcolor(BLACK);
    circle(x+40,y-40,14);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(x+40,y-40,BLACK);
    //mouth
    setcolor(BLACK);
    arc(x,y+10,200,340,50);
    arc(x,y+9,200,340,50);
    arc(x,y+11,200,340,50);
    arc(x,y+8,200,340,50);
    arc(x,y+12,200,340,50);
    arc(x,y+7,200,340,50);
    arc(x,y+6,200,340,50);
    arc(x,y+13,200,340,50);
}
