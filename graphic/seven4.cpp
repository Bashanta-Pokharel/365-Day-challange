#include <graphics.h>
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");	// Original rectangle
    int x1 = 100, y1 = 100, x2 = 200, y2 = 200;// Shearing factor
    int shx = 1;	// Original object
    setcolor(WHITE);
    rectangle(x1, y1, x2, y2);
    outtextxy(90, 80, "Before Shearing"); // Sheared rectangle
    setcolor(WHITE);
    line(x1 + shx * y1, y1, x2 + shx * y1, y1);
    line(x2 + shx * y1, y1, x2 + shx * y2, y2);
    line(x2 + shx * y2, y2, x1 + shx * y2, y2);
    line(x1 + shx * y2, y2, x1 + shx * y1, y1);
    outtextxy(250, 150, "After Shearing");
    printf("The Shearing is Completed");
    getch();
    closegraph();
    return 0;
}
