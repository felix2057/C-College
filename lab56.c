#include <stdio.h>
int main()
{
    int i=1,t=1;
    while (i<19)
    {
     if(i>9) 
     {
       printf("%d\n", i-t);
       t=t+2;

     }
     else printf("%d\n",i);
     i++;
    }
    return 0;
}
