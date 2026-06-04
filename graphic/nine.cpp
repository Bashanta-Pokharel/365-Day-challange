#include <graphics.h>
#include <iostream>
#include <conio.h>
using namespace std;
const int INSIDE = 0;
const int LEFT = 1;
const int RIGHT = 2;
const int BOTTOM = 4;
const int TOP = 8;
int Wxmin = 75, Wymin = 75, Wxmax = 200, Wymax = 200;// Compute region code
int computeCode(int x, int y) {
    int code = INSIDE;
    if (x < Wxmin) code |= LEFT;
    else if (x > Wxmax) code |= RIGHT;
    if (y < Wymin) code |= TOP;
    else if (y > Wymax) code |= BOTTOM;
    return code;
}
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    int x1 = 50, y1 = 150;
    int x2 = 350, y2 = 250;// == BEFORE CLIPPING 
    setcolor(WHITE);// Window (Before)
    rectangle(Wxmin, Wymin, Wxmax, Wymax);
    outtextxy(Wxmin, Wymin - 20, "BEFORE");// Original line
    line(x1, y1, x2, y2);// Copy original values for clipping
    int ox1 = x1, oy1 = y1, ox2 = x2, oy2 = y2; // = CLIPPING PROCESS =
    int code1 = computeCode(x1, y1);
    int code2 = computeCode(x2, y2);
    bool accept = false;
    while (true) {
        if ((code1 == 0) && (code2 == 0)) {
            accept = true;
            break;
        }
        else if (code1 & code2) {
            break;
        }
        else {
            int codeOut;
            int x, y;
            if (code1 != 0)
                codeOut = code1;
            else
                codeOut = code2;
            if (codeOut & TOP) {
                x = x1 + (x2 - x1) * (Wymin - y1) / (y2 - y1);
                y = Wymin;
            }
            else if (codeOut & BOTTOM) {
                x = x1 + (x2 - x1) * (Wymax - y1) / (y2 - y1);
                y = Wymax;
            }
            else if (codeOut & RIGHT) {
                y = y1 + (y2 - y1) * (Wxmax - x1) / (x2 - x1);
                x = Wxmax;
            }
            else if (codeOut & LEFT) {
                y = y1 + (y2 - y1) * (Wxmin - x1) / (x2 - x1);
                x = Wxmin;
            }
            if (codeOut == code1) {
                x1 = x;
                y1 = y;
                code1 = computeCode(x1, y1);
            }
            else {
                x2 = x;
                y2 = y;
                code2 = computeCode(x2, y2);
            }
        }
    }// ================= AFTER CLIPPING =================
    setcolor(WHITE);
    int shiftX = 350;  // move to right side
    // Draw new window (After)
    rectangle(Wxmin + shiftX, Wymin, Wxmax + shiftX, Wymax);
    outtextxy(Wxmin + shiftX, Wymin - 20, "AFTER");
    if (accept) {
        // Draw clipped line in right window
        line(x1 + shiftX, y1, x2 + shiftX, y2);
    }
    printf("Cohen Sutherland Line Clipping Completed");
    getch();
    closegraph();
    return 0;
}
