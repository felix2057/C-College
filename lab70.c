// C Program to build 4 pyramids upward and downwards
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the digit upto which the pattern will be printed");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
            printf(" ");
        for (j = 0; j < 2 * i + 1; j++)
            printf("%d", i + 1);
        for (j = 0; j < 2 * (n - 1 - i); j++)
            printf(" ");
        for (j = 0; j < 2 * i + 1; j++)
            printf("%d", i + 1);
        printf("\n");
    }
    for (i = n - 1; i > 0; i--)
    {
        for (j = n - 1 - i; j >= 0; j--)
            printf(" ");
        for (j = 2 * i - 1; j > 0; j--)
            printf("%d", i);
        for (j = 2 * (n - i - 1)+1; j >= 0; j--)
            printf(" ");
        for (j = 2 * i - 1; j > 0; j--)
            printf("%d", i);
        printf("\n");
    }
    return 0;
}