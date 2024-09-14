#include <stdio.h>

int main() {
    int n, a = 0, b = 1;
    printf("Enter the number of term: ");
    scanf("%d", &n);

    printf("Fibonacci series of given number of term: %d %d ", a, b);
    for (int i = 3; i <= n; i++) {
        int next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
