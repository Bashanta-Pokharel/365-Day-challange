// C++ Program for 8-Connected Boundary Fill Algorithm

#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;
// Function for 8-connected boundary fill
void boundaryFill8(int x, int y, int fill_color, int boundary_color){
    int current = getpixel(x, y);
    // Check whether current pixel is boundary color or fill color
    if(current != boundary_color && current != fill_color){
        // Fill the pixel
        putpixel(x, y, fill_color);
        
        // Recursive calls for 8 neighboring pixels
        boundaryFill8(x + 1, y, fill_color, boundary_color);	// Right
        boundaryFill8(x - 1, y, fill_color, boundary_color);	// Left
        boundaryFill8(x, y + 1, fill_color, boundary_color);	// Top
        boundaryFill8(x, y - 1, fill_color, boundary_color);	// Bottom
        boundaryFill8(x + 1, y + 1, fill_color, boundary_color);// Top Right
        boundaryFill8(x - 1, y + 1, fill_color, boundary_color);// Top Left
        boundaryFill8(x + 1, y - 1, fill_color, boundary_color);// Bottom Right
        boundaryFill8(x - 1, y - 1, fill_color, boundary_color);// Bottom Left
    }
}

int main(){
    int gd = DETECT, gm;	// Initialize graphics mode
    initgraph(&gd, &gm, "..\\bgi");	// Draw rectangle boundary
    rectangle(50, 50, 200, 200);
    boundaryFill8(100, 100, WHITE,YELLOW);   // Apply 8-connected boundary fill
    cout << "8-Connected Boundary Fill Applied." << endl;
    getch();    // Close graphics mode
    closegraph();
    return 0;
}
