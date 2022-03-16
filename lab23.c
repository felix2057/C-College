#include <stdio.h>
#define g 9.8
int main()
{
    int pt, st, pv;
    float sv;
    printf("enter the primary voltage:");
    scanf("%d",&pv);
    printf("\n enter the numer of primary turns:");
    scanf("%d",&pt);
    printf("\n enter the numer of secondary turns:");
    scanf("%d",&st);
    sv= ((float)(pv * st))/pt;
    printf("\n Secondary Voltage is %f volts:",sv);
    return 0;
}



