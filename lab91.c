//C Program to find average marks obtained by a class of 20 students in a test and
//count number of students scored O(90 & above) grade.
#include <stdio.h>

int main()
{
    int i,avg,count=0,sum=0,marks[20];

    for(i=0;i<20;i++) {
        printf("\nEnter Marks:");
        scanf("%d",&marks[i]);
    }
    for(i=0;i<20;i++) {
        sum=sum+marks[i];
        if (marks[i]>89)
        count++;
    }
    avg = sum/20;
    printf("\nAverage marks=%d",avg);
    printf("\nNumber of students scored O Grade=%d",count);
    return 0;
}

