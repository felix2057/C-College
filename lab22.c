#include <stdio.h>
int main()
{
    int x1, y1, x2, y2;
    float m;
    printf("enter the value of x1 and y1\n");
    scanf("%d %d", &x1, &y1);
    printf("enter the value of x2 and y2\n");
    scanf("%d %d", &x2, &y2);
    m = ((float)(y2 - y1)) / (x2 - x1);
    printf("\n the slope is %f", m);
    return 0;
}