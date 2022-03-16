#include <stdio.h>
#define pi 3.14
int main()
{
    int r;
    float a;
    printf("enter radius (r):");
    scanf("%d", &r);
    
    a = pi*r*r;
    printf("area of circle = %f", a);
    
    return 0;
}