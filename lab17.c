#include <stdio.h>
#define g 9.8
int main()
{
    int u, t;
    float v;
    printf("enter initial velocity (u):");
    scanf("%d", &u);
    printf("enter time (t):");
    scanf("%d", &t);
    
    v = u + (g*t);
    printf("final velocity = %f", v);
    
    return 0;
}