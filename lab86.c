// C Program to write a function to find out largest between n numbers. Count the number
// of leaders ( A number is a leader if all previous numbers are smaller)
#include <stdio.h>
int main()
{
    int a;
    a = find_max(10);
    printf("\n Max is %d",a);
    printf("\n Max is %d",find_max(15));

    a = count_leader(20);
    printf("\n No of Leaders are %d",a);
    printf("\n No of Leaders are %d",count_leader(10));
    return 0;
}