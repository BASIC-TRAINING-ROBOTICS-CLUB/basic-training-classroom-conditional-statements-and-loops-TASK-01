#include <math.h>


int Full_Adder(int a, int b, int carry_in, int *sum, int *carry_out) {
    *sum = a ^ b ^ carry_in;            
    *carry_out = (a & b) | (carry_in & (a ^ b));  
    return 0;
}
int Half_Adder(int *a, int *b) {
    int carry = *a & *b;  
    *a = *a ^ *b;        
    *b = carry;           
    return 0;
}
int f(int x) {
    return (int)pow(2, x);  
}
int Bin_to_Dec(int bin_digit, int position) {
    return bin_digit * (int)pow(2, position);  
    }
