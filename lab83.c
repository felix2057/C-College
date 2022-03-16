// C Program to find reverse of a number using a function
#include<stdio.h>
#include<conio.h>
Reverse(int n)
{
   int sum=0;
   while (n!=0)
   {
     sum = sum*10 + n%10;
     n /= 10;
   }
   return sum;
}
void main()
{  
   int rev, num;
   clrscr();
   printf("Enter a Positive Number: ");
   scanf("%d", &num);
   rev = Reverse(num);
   printf("The Reverse of given number %d is: %d", num, rev);
   getch();
}