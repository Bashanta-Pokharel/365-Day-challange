#include <graphics.h>
#include <conio.h>
// 4-connected Boundary Fill
void boundaryFill4(int x, int y, int fill_color, int boundary_color){
    int current = getpixel(x, y);
    if (current != boundary_color && current != fill_color){
        putpixel(x, y, fill_color);
		// Only 4 directions
        boundaryFill4(x + 1, y, fill_color, boundary_color);
        boundaryFill4(x - 1, y, fill_color, boundary_color);
        boundaryFill4(x, y + 1, fill_color, boundary_color);
        boundaryFill4(x, y - 1, fill_color, boundary_color);
    }
}
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI"); // Set boundary color
    setcolor(RED); // Draw circle
    circle(250, 250, 100); // Fill inside the circle
    boundaryFill4(250, 250, WHITE, RED);
    printf("Boundary Fill Completed");
    getch();
    
    closegraph();
    return 0;
}
