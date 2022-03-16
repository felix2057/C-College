#include <stdio.h>
int main()
{
    int a = 4;
    int b = 7;
    int c = 1;
    int p;
    p = (a++) + (b--) + (++c) + (5);

    printf("%d\n%d\n%d\n%d\n", a,b,c,p);

    return 0;
}
