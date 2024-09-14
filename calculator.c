#include <stdio.h>
#include <math.h>

int sum(int a, int b) {
    return a + b;
}
float div(int a, int b) {
    return (float)a / b; 
}
int sub(int a, int b) {
    return a - b;
}
int mult(int a, int b) {
    return a * b;
}

int main() {
    int a, b;

    printf("enter the 1st value: ");
    scanf("%d", &a);
    printf("enter the 2nd value: ");
    scanf("%d", &b);

    int sumResult = sum(a, b);
    printf("Sum = %d\n", sumResult);

    int subResult = sub(a, b);
    printf("Subtraction = %d\n", subResult);

    int multResult = mult(a, b);
    printf("Multiplication = %d\n", multResult);

    float divResult = div(a, b);
    printf("Division = %0.2f\n", divResult);

    return 0;
}