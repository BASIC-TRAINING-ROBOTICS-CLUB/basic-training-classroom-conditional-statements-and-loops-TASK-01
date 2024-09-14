#include <stdio.h>

int main() {
    int n, i;
    long long int factorial = 1;
    printf("Enter a number from 1 to 20: ");
    scanf("%d", &n);

    if (n < 0 )
        printf("Factorial is not defined for negative numbers.\n");
    else if (n<20)
    {
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("factorial of %d = %lld\n", n, factorial);
    }
    else{
        printf("Enter the number from 1 to 20 only.");
    }

    return 0;
}
