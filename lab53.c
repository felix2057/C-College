#include <stdio.h>
int main()
{
    int sum = 0 ,n,count = 0,i;
    for(i=0;i<10;i++)
    {
        printf("\nEnter the number:");
        scanf("%d", &n);
        if(n % 2)
           {
             count++;
             sum+=n;
           }
    }
    printf("Number of odd numbers = %d and Sum = %d",count,sum);
    return 0;
}