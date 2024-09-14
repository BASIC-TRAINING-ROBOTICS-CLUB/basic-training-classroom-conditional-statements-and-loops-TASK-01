#include <stdio.h>

void main() {
    int a, b, c;
    printf("Enter 3 sides of a triangle: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        printf("The triangle is right angled.\n");
    else
        printf("The triangle is not right angled.\n");
}
