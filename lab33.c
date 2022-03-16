#include <stdio.h>
int main()
{
    int marks,age;
    printf("Enter Marks:");
    scanf("%d",&marks);
    printf("\nEnter Age:");
    scanf("%d",&age);

    marks = marks+40;
    

      if (age<50)
    {
      marks=marks+20;
      printf("60 grace marks given, final marks secured %d",marks);
    } 
      else
    { 
      printf("40 grace marks given, final marks secured %d",marks);
    } 
      return 0;
    }