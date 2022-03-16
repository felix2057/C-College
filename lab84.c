// C Program to find sum of prime numbers from 1 to 20 using functions 
#include <stdio.h>
int isprime(int j) {
   int count=0;
   for(int i = 2 ; i <= j/2; i++) {
      if(j%i == 0) {
         count = 1;
      }
   }
   if(count == 0) {
      return 1;
   }
   else
      return 0;
}
int main(void) {
   int n = 20;
   int i=0, j= 1;
   int sum = 0;
   while(1) {
      j++;
      if(isprime(j)) {
         sum += j;
         i++;
      }
      if(i == n) {
         break;
      }
   }
   printf("The sum of first %d prime numbers is %d", n, sum);
   return 0;
}