// C Program to display two characters n times on the screen using a function
//  n and ch are formal parameteres
#include <stdio.h>
void display(int n, char ch)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%c", ch);
    printf("\n");
}
int main()
{
    display(10, '$');
    display(12, 'a');

    return 0;
}