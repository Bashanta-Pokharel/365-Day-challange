#include <graphics.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI"); // WINDOW boundaries
    int Wxmin = 100, Wymin = 100;
    int Wxmax = 300, Wymax = 300;// VIEWPORT boundaries
    int Vxmin = 350, Vymin = 100;
    int Vxmax = 600, Vymax = 300;// ?? Set text size
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);// Draw window
    rectangle(Wxmin, Wymin, Wxmax, Wymax);
    outtextxy(Wxmin, Wymin - 20, "WINDOW");// Draw viewport
    rectangle(Vxmin, Vymin, Vxmax, Vymax);
    outtextxy(Vxmin, Vymin - 20, "VIEWPORT");// Point inside window
    int x = 200, y = 200;
    putpixel(x, y, WHITE);
    outtextxy(x + 5, y + 5, "P");// Scaling factors
    float Sx = (float)(Vxmax - Vxmin) / (Wxmax - Wxmin);
    float Sy = (float)(Vymax - Vymin) / (Wymax - Wymin);// Mapping formula
    int Xv = Vxmin + (x - Wxmin) * Sx;
    int Yv = Vymin + (y - Wymin) * Sy;// Draw mapped point
    setcolor(WHITE);
    putpixel(Xv, Yv, WHITE);
    outtextxy(Xv + 5, Yv + 5, "P'");
    printf("Window-Viewport Mapping is completed"); // fixed ;
    getch();
    closegraph();
    return 0;
}
