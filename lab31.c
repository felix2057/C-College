#include <stdio.h>
int main()
{
    int a, b, c, t;
    printf("Enter the value of a=");
    scanf("%d", &a);
    printf("Enter the value of b=");
    scanf("%d", &b);
    printf("Enter the value of c=");
    scanf("%d", &c);
    t = (a == b) || (b == c) || (a == c);
    printf("is it a isosceles triangle? if t=0 no, if t=1 yes");
    printf("\nt=%d",t);
    return 0;
}