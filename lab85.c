// C program to make a function to find out the largest between n numbers and another
//function to count the number of leaders ( A number is a leader if all previous
// are smaller)
#include <stdio.h>
int find_max(int n)
{
    int next_num, largest = 0, i;
    for (i = 0; i < n; i++)
    {
        printf("\n Enter next number:");
        scanf("%d", &next_num);
        if (next_num > largest)
            largest = next_num;
    }
    return (largest);
}
int find_leader(int n)
{
    int next_num, largest = 0, i, count = 0;
    for (i = 1; i <= n; i++)
    {
        printf("\nEnter the element: ");
        scanf("%d", &next_num);
        if (next_num > largest)
        {
            largest = next_num;
            count = count + 1;
        }
    }
    return (count);
}
int main()
{
    int a, b;
    a = find_max(4);
    printf("The Largest number is %d", a);
    b = find_leader(4);
    printf("The number of leaders are %d", b);
    return 0;
}