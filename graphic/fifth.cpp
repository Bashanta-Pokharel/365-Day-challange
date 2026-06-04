// C Program for 4-Connected Boundary Fill Algorithm
#include <graphics.h>
#include <iostream>
#include <conio.h>
using namespace std;

// Function for 4-connected pixels
void boundaryFill4(int x, int y, int fill_color, int boundary_color)
{
    int current = getpixel(x, y);
    if (current != boundary_color && current != fill_color)
    {
        putpixel(x, y, fill_color);
        delay(5); 

        boundaryFill4(x + 1, y, fill_color, boundary_color);
        boundaryFill4(x, y + 1, fill_color, boundary_color);
        boundaryFill4(x - 1, y, fill_color, boundary_color);
        boundaryFill4(x, y - 1, fill_color, boundary_color);
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "..\\bgi");

    int x = 250, y = 200, radius = 50;

    // Draw boundary (circle outline)
    circle(x, y, radius);

    // Call boundary fill
    boundaryFill4(x, y, WHITE,YELLOW);

    cout << "Boundary Fill Algorithm applied inside circle." << endl;

    getch();
    closegraph();
    return 0;
}
