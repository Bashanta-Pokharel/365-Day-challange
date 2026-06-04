#include <graphics.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    int x[] = {200, 250, 300, 275, 225, 200};
    int y[] = {150, 100, 150, 220, 220, 150};// Draw X-axis
    line(0, 240, 640, 240);// Original pentagon
    setcolor(WHITE);
    int original[] = {
        200,150,
        250,100,
        300,150,
        275,220,
        225,220,
        200,150
    };
    drawpoly(6, original);
    outtextxy(180, 80, "Before Reflection");// Reflection about X-axis (y = 240)
    int ry[6];
    for(int i = 0; i < 6; i++){
        ry[i] = 480 - y[i];
    }
    int reflected[] = {
        200, ry[0],
        250, ry[1],
        300, ry[2],
        275, ry[3],
        225, ry[4],
        200, ry[5]
    };
    drawpoly(6, reflected);
    outtextxy(180, 370, "After Reflection");
    printf("The Reflection is Completed");
    getch();
    closegraph();
    return 0;
}
