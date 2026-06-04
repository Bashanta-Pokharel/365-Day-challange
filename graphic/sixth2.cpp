#include <graphics.h>
#include <conio.h>

void floodFill8(int x, int y, int oldColor, int newColor){
    if (getpixel(x, y) == oldColor){
        putpixel(x, y, newColor);				 // 8 connected neighbors
        floodFill8(x + 1, y, oldColor, newColor);     // Right
        floodFill8(x - 1, y, oldColor, newColor);     // Left
        floodFill8(x, y + 1, oldColor, newColor);     // Down
        floodFill8(x, y - 1, oldColor, newColor);     // Up
        floodFill8(x + 1, y + 1, oldColor, newColor); // Bottom Right
        floodFill8(x - 1, y - 1, oldColor, newColor); // Top Left
        floodFill8(x + 1, y - 1, oldColor, newColor); // Top Right
        floodFill8(x - 1, y + 1, oldColor, newColor); // Bottom Left
    }
}
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");	// Draw rectangle
    rectangle(150, 150, 300, 300);		 // Apply flood fill
    floodFill8(200, 200, BLACK, WHITE);
    getch();
    closegraph();
    return 0;
}
