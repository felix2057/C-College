#include <stdio.h>
int main()
{
    int a, b, c, t, sa, sb, sc;
    printf("Enter the value of a=");
    scanf("%d", &a);
    printf("Enter the value of b=");
    scanf("%d", &b);
    printf("Enter the value of c=");
    scanf("%d", &c);
    sa = a * a;
    sb = b * b;
    sc = c * c;
    t = (sa == sb + sc) || (sb == sa + sc) || (sc == sa + sb);
    printf("is it a right triangle? if t=0 no,if t=1 yes");
    printf("\nt=%d", t);
    return 0;
}
