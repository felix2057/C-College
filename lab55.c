#include <stdio.h>
#include <math.h>
#define pi 3.14
#define g 9.8
int main()
{
    int l;
    float t;
    printf("Length\t\tTime Period");
    for (l = 10; l<=50; l=l+10)
    {
     t = 2.0 * pi * sqrt(1/g);   
     printf("\n%d\t\t%f",l,t);
    }
}