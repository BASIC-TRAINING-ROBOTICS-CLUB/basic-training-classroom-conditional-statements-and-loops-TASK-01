#include <stdio.h>

int main() {
    int i,index;
    printf("Enter the size of array :");
    scanf("%d",&index);
    int element[index];
    printf("enter the element of array :\n");
    for (i=0; i<index ;i++)
    {
        scanf("%d",&element[i]);
    }

    // code for odd and even count 
    int even,odd;
    for (i=0;i<index;i++)
    {
        if(element[index] %2 == 0)
            {
                even++;
            }
        else if(element[index] % 2!= 0)
            {
                odd++;
            }
    }
    printf("enen count in array is %d\n",even);
    printf("odd count is %d \n",odd);
    
    /*for(i=0;i<index;i++)
        {
            printf("%d",element[i]);
        }*/
    
    return 0;
}