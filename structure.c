#include <stdio.h>

struct id
{
    long long int enrl_no;
    float cpi;
    float spi;
};

int main(){

    struct id sahil;
    sahil.enrl_no=220210116038;
    sahil.spi=9.99;
    sahil.cpi=9.99;
    
    printf("ENROLLMENT NUMBER : %lld \n ",sahil.enrl_no);
    printf("SPI : %f \n ",sahil.spi);
    printf("CPI : %f \n ",sahil.cpi);



}
