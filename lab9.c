#include <stdio.h>
int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int r;
    r = (++a) + (--b) + (7) + (c++);

    printf("%d\n%d\n%d\n%d\n", a,b,c,r);

    return 0;
}