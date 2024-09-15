#include <stdio.h>
#include <math.h>
#include "Full_Adderh.h"

void main() {
    int num1, num2, i;
    int binary1[8], binary2[8], carry[8] = {0}, sum_bits[8];
    int total_sum = 0;

    printf("Enter any two numbers (less than 256):\n");
    scanf("%d %d", &num1, &num2);

    if (num1 + num2 >= 256) {
        printf("Error: The sum exceeds the limit of 255.\n");
    } else {
        for (i = 0; i < 8; i++) {
            binary1[7 - i] = num1 % 2;
            binary2[7 - i] = num2 % 2;
            num1 /= 2;
            num2 /= 2;
        }
        for (i = 0; i < 8; i++) {
            if (i == 0) {                
                Full_Adder(binary1[7 - i], binary2[7 - i], 0, &sum_bits[7 - i], &carry[i]);
            } else {
                Full_Adder(binary1[7 - i], binary2[7 - i], carry[i - 1], &sum_bits[7 - i], &carry[i]);
            }
        }
        printf("Binary representation of the first number: ");
        for (i = 0; i < 8; i++) {
            printf("%d", binary1[i]);
        }

        printf("\nBinary representation of the second number: ");
        for (i = 0; i < 8; i++) {
            printf("%d", binary2[i]);
        }
        printf("\nSum in binary: ");
        for (i = 0; i < 8; i++) {
            printf("%d", sum_bits[i]);
            total_sum += Bin_to_Dec(sum_bits[i], 7 - i); 
        }
        printf("\n\nSum of the two numbers in decimal: %d\n", total_sum);
    }
}
