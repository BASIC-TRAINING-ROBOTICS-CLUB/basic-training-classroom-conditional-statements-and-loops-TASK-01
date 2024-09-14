#include <stdio.h>

struct id
{
    long long int enrl_no;
    float cpi;
    float spi;
};

int main(){

    struct id dev;
    dev.enrl_no=220210116021;
    dev.spi=9.99;
    dev.cpi=9.99;
    
    printf("ENROLLMENT NUMBER : %lld \n ",dev.enrl_no);
    printf("SPI : %.2f \n ",dev.spi);
    printf("CPI : %.2f \n ",dev.cpi);



}
