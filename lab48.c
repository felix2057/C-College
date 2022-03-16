#include <stdio.h>

int main()
{
    int A, B, C, sum;

    printf("Enter three angles of triangle: \n");
    scanf("%d%d%d", &A, &B, &C);

    sum = A + B + C;

    if (sum == 180 && A > 0 && B > 0 && C > 0)
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}