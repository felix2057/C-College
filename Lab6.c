#include <stdio.h>

int main()
{
    int a = 4; //4 is divisor
    int b = 6; //6 is dividend
    int quotient = a/b;
    int remainder = b % a;
    printf("The quotient is %d \n", quotient);
    printf("The remainder is %d \n", remainder);
    return 0;
}