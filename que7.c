#include <stdio.h>

int main() {
    int year;
    printf("Enter a year after 2000: ");
    scanf("%d", &year);

    if (year > 2000) {
        if (year % 4 == 0 )
            printf("%d is a leap year.\n", year);
        else
            printf("%d is not a leap year.\n");
    } else {
        printf("Year is not after 2000.\n");
    }
    return 0;
}
