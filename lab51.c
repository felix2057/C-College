#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers a,b and c:");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a < c)
        printf("\nSecond Largest = %d", a);
    if (a > c && a < b)
        printf("\nSecond Largest = %d", a);

    if (b > a && b < c)
        printf("\nSecond Largest = %d", b);
    if (b > c && b < a)
        printf("\nSecond Largest = %d", b);

    if (c > a && c < b)
        printf("\nSecond Largest = %d", c);
    if (c > b && c < a)
        printf("\nSecond Largest = %d", c);

    return 0;
}