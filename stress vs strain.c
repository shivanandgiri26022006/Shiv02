#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Arrays of strain (x) and stress (y)
    float strain[5] = {0.0, 0.02, 0.05, 0.12, 0.18};
    float stress[5] = {0, 150, 200, 300, 250};
    char label[5] = {'A', 'B', 'C', 'D', 'E'};

    int i;
    int x0 = 100, y0 = 380;      // graph origin (O)
    int maxX = 500, maxY = 300; // graph size

    // Draw axes
    line(x0, y0, x0, y0 - maxY);         // Y-axis
    line(x0, y0, x0 + maxX, y0);         // X-axis

    outtextxy(x0 - 30, y0 - maxY - 20, "Stress");
    outtextxy(x0 + maxX + 10, y0 + 10, "Strain");

    // Plot stress-strain curve
    for (i = 0; i < 5; i++) {

        int px = x0 + (strain[i] * 2000);      // scale strain to X
        int py = y0 - (stress[i] * 1);         // scale stress to Y

        // Draw point
        setcolor(WHITE);
        circle(px, py, 3);
        floodfill(px, py, WHITE);

        // Label point
        char txt[2] = {label[i], '\0'};
        outtextxy(px + 5, py - 5, txt);

        // Draw lines between points
        if (i > 0) {
            int prevX = x0 + (strain[i-1] * 2000);
            int prevY = y0 - (stress[i-1] * 1);
            line(prevX, prevY, px, py);
        }
    }

    outtextxy(x0 - 10, y0 + 10, "O");

    getch();
    closegraph();
    return 0;
}