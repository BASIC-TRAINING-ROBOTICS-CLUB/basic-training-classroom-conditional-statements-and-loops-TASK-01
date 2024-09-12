/*
Q. program to check if a triangle is right angled triangle -take input of 3 sides from user.
Ans.
#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
        printf("The triangle is a right-angled triangle.\n");
    } else {
        printf("The triangle is not a right-angled triangle.\n");
    }

    return 0;
}


/*
Q. program to check if a triangle is equilateral sides length is given by user.
Ans.
#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f",&a,&b,&c);

    // Check if the triangle is equilateral
    if (a == b && b == c) {
        printf("The triangle is an equilateral triangle.\n");
    } else {
        printf("The triangle is not an equilateral triangle.\n");
    }

    return 0;
}*/

/*
Q.program to check odd and even numbers
Ans.
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}*/

/*Q.take value of x and y and check its quadrant in c.
Ans.
#include <stdio.h>

int main() {
    float x,y;

    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("Enter the value of y: ");
    scanf("%f",&y);

    if (x > 0 && y > 0) {
        printf("The point (%.2f, %.2f) lies in the First Quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%.2f, %.2f) lies in the Second Quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%.2f, %.2f) lies in the Third Quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%.2f, %.2f) lies in the Fourth Quadrant.\n", x, y);
    } else if (x == 0 && y != 0) {
        printf("The point (%.2f, %.2f) lies on the Y-axis.\n", x, y);
    } else if (y == 0 && x != 0) {
        printf("The point (%.2f, %.2f) lies on the X-axis.\n", x, y);
    } else {
        printf("The point (%.2f, %.2f) is at the Origin.\n", x, y);
    }

    return 0;
}*/



/*Q.max of 3 numbers.
Ans.
#include<stdio.h>

int main() {
    float a,b,c;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    printf("Enter the third number: ");
    scanf("%f",&c);

    float max=a;

    if (b>max) {
        max = b;
    }
    if (c>max) {
        max =c;
    }

    // Printing the maximum number
    printf("The maximum of the three numbers is: %.2f\n", max);

    return 0;
}*/


/*Q. program to check if number is +, - , or zero.
Ans.
#include <stdio.h>

int main() {
    float num;

    printf("Enter a number: ");
    scanf("%f",&num);

    if (num>0) {
        printf("The number is positive.\n");
    } else if (num<0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
*/

/*Q. check if an entered character is a vowel.
Ans.
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c",&ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n",ch);
    } else {
        printf("%c is not a vowel.\n",ch);
    }

    return 0;
}

*/

/*Q.print multiplication table of 3.
Ans.
#include <stdio.h>

int main() {
    int i;

    printf("Multiplication Table of 3:\n");
    for (i = 1; i <= 10; i++) {
        printf("3 x %d = %d\n", i, 3 * i);
    }

    return 0;
}
*/

/*Q.count all the digit in a number and find there sum.
Ans.
#include <stdio.h>

int main() {
    int n,sum=0,r;
    printf("Enter any Number: \n");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("Sum of Digits: %d",sum);

    return 0;
}
*/
/*
Q.fibonnaci series upto n numbers.
Ans
#include <stdio.h>

int main() {
    int n,a=0,b=1,c,i;
    printf("Enter the number of Term... ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }

    return 0;
}
*/

/*Q.factorial of n number.
Ans.
#include <stdio.h>

int main() {
    int i,a=1;
    printf("Enter the number to find Factorial=");
    scanf("%d",&i);
    while(i>=1)
    {
        a=a*i,
        i--;
    }

    printf("\Factorial = %d",a);

    return 0;
}
*/
Q.




