// C Program to print inverted pyramid
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (n * 2 - (2 * i - 1)); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}