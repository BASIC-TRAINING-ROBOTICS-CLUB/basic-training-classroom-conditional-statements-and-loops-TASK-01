#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character in small letter: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
        printf("%c is a vowel.\n", ch);
    else
        printf("%c is consol.\n", ch);

    return 0;
}
