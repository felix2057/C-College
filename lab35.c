#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("\nEnter 3 Numbers");
    scanf("%d %d %d",&a,&b,&c);
    max=a;

    if(b>max)
        max=b;

    if(c>max)
        max=c;
   printf("\nThe Largest No. is %d",max);
    return (0);
}