#include <graphics.h>
#include <iostream>
#include <conio.h>
using namespace std;
void midptellipse(int rx, int ry, int xc, int yc)
{
    int x = 0;
    int y = ry;
    float d1 = (ry * ry) - (rx * rx * ry) + (0.25 * rx * rx);
    int dx = 2 * ry * ry * x;
    int dy = 2 * rx * rx * y;
    while (dx < dy)
    {
        putpixel(x + xc, y + yc, WHITE);
        putpixel(-x + xc, y + yc, WHITE);
        putpixel(x + xc, -y + yc, WHITE);
        putpixel(-x + xc, -y + yc, WHITE);
        if (d1 < 0)
        {
            x++;
            dx = dx + (2 * ry * ry);
            d1 = d1 + dx + (ry * ry);
        }
        else
        {
            x++;
            y--;
            dx = dx + (2 * ry * ry);
            dy = dy - (2 * rx * rx);
            d1 = d1 + dx - dy + (ry * ry);
        }
        delay(30);
    }
    float d2 = ((ry * ry) * ((x + 0.5) * (x + 0.5))) +
               ((rx * rx) * ((y - 1) * (y - 1))) -
               (rx * rx * ry * ry);
    while (y >= 0)
    {
        putpixel(x + xc, y + yc, WHITE);
        putpixel(-x + xc, y + yc, WHITE);
        putpixel(x + xc, -y + yc, WHITE);
        putpixel(-x + xc, -y + yc, WHITE);

        if (d2 > 0)
        {
            y--;
            dy = dy - (2 * rx * rx);
            d2 = d2 + (rx * rx) - dy;
        }
        else
        {
            y--;
            x++;
            dx = dx + (2 * ry * ry);
            dy = dy - (2 * rx * rx);
            d2 = d2 + dx - dy + (rx * rx);
        }
        delay(30);
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "..\\bgi");

    int rx, ry, xc, yc;
    printf("This Program is coded by Bashanta Pokharel\n");
    cout << "Mid-Point Ellipse Drawing Algorithm" << endl;
    cout << "Enter radius along x-axis (rx): ";
    cin >> rx;
    cout << "Enter radius along y-axis (ry): ";
    cin >> ry;
    cout << "Enter centre coordinates (xc yc): ";
    cin >> xc >> yc;
    midptellipse(rx, ry, xc, yc);
    getch();
    closegraph();
    return 0;
}
