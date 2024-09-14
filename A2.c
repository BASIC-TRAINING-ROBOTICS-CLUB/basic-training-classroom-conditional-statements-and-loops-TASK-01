#include <stdio.h>

int main() {
    int i;
    int arr[]={1,2,3,4,5};
    for (i=0 ; i<5 ; i++)
    {
        printf("Array index %d element : %d \n",i, arr[i]);
    }
    int sum;
    for(i=0;i<5;i++){
        sum = arr[i]+arr[i+1];
    }
        printf("sum of array =%d",sum);
    return 0;
}