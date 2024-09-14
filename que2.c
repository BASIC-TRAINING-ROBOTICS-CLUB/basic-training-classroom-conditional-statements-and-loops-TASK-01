#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the 3 sides of a triangle: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c && a == c)
        printf("The triangle is equilateral .\n");
    else
        printf("The triangle is not equilateral .\n");
    return 0;
}
