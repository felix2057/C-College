// C program to convert letters from lowercase to uppercase by creating a function
#include <stdio.h>
void function(char l)
{
    char u;
    u = l - 32;
    printf("Uppercase: %c", u);
}
int main()
{
    char ch;
    printf("Enter the lowercase Character: ");
    scanf("%c", &ch);
    function(ch);
    return 0;
}


