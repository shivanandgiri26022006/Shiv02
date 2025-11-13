#include <stdio.h>

#define MAX 50

int main() {
    int n, i, j;
    float strain[MAX], stress[MAX];
    float maxStress = 0;

    printf("Enter number of data points: ");
    scanf("%d", &n);

    printf("Enter strain values:\n");
    for (i = 0; i < n; i++)
        scanf("%f", &strain[i]);

    printf("Enter stress values:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &stress[i]);
        if (stress[i] > maxStress)
            maxStress = stress[i];
    }

    printf("\n\n--- Stress vs Strain Curve (ASCII Graph) ---\n\n");

    for (i = 0; i < n; i++) {
        int pos = (stress[i] / maxStress) * 50; // scale to width 50

        printf("%6.3f | ", strain[i]); // X-axis label
        for (j = 0; j < pos; j++)
            printf(" ");
        printf("*\n"); // point on graph
    }

    printf("        --------------------------------------------------\n");
    printf("                Stress Increasing → (scaled)\n");

    return 0;
}