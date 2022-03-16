#include <stdio.h>
#define g 9.8
int main()
{
    int u, t;
    float s;
    printf("enter initial velocity (u):");
    scanf("%d", &u);
    printf("enter time (t):");
    scanf("%d", &t);
    
    s = (u * t) + 0.5 * (g * t * t);
    printf("distance = %f", s);
    
    return 0;
}
