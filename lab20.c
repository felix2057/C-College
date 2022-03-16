#include <stdio.h>
#define pi 3.14
int main()
{
    int r, h;
    float a;
    printf("enter radius (r):");
    scanf("%d", &r);
    
    printf("enter height (h):");
    scanf("%d", &h);

    a = pi*r*r*h;
    printf("volume of cylinder = %f", a);
    
    return 0;
}