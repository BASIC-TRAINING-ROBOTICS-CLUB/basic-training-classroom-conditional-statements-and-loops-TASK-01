#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number to find devisor: ");
    scanf("%d", &n);

    printf("Divisors of the givn number %d are: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
