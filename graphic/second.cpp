#include <graphics.h>
#include <iostream>
#include <conio.h>
using namespace std;
void bresenham(int x1, int y1, int x2, int y2){
    int dx = x2 - x1;
    int dy = y2 - y1;
    int x = x1;
    int y = y1;
    int p = 2 * dy - dx;   
    while (x <= x2){
        putpixel(x, y, WHITE);  
        x++;
        if (p < 0){
            p = p + 2 * dy;
        }
        else{
            y++;
            p = p + 2 * (dy - dx);
        }
        delay(50);
    }
}

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "..\\bgi");
    int x1, y1, x2, y2;
    printf("This Program is coded by Bashanta Pokharel\n");
    cout << "Bresenham's Line Drawing Algorithm" << endl;
    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;
    bresenham(x1, y1, x2, y2);
    getch();
    closegraph();
    return 0;
}
