#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the coordinates ( x, y ): ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("Point is in the 1st quadrant.\n");
    else if (x < 0 && y > 0)
        printf("Point is in the 2nd quadrant.\n");
    else if (x < 0 && y < 0)
        printf("Point is in the 3rd quadrant.\n");
    else if (x > 0 && y < 0)
        printf("Point is in the 4th quadrant.\n");
    else
        printf("Point is on the origin.\n");

    return 0;
}
