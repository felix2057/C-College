#include <stdio.h>
int main()
{
    int a, b, c, t;
    printf("Give value of side A");
    scanf("%d", &a);
    printf("\nGive value of side B");
    scanf("%d", &b);
    printf("\nGive value of side C");
    scanf("%d", &c);

    printf("\n Do they satisfy triangle property? 1 for yes, 0 for No :%d", t);
    return 0;
}