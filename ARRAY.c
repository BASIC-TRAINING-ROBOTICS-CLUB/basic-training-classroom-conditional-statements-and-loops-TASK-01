#include<stdio.h>
int main()
{
    int om[]={1,2,3,4,5};
    int dp[5];
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    dp[4]=4;
    for(int i=0;i<5;i++){
        printf("%d \n",om[i]);
    }
    return 0;

}