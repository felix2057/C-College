#include <stdio.h>
int main() {
   int a,b,x;

   a = 13;
   b = 9;
   x = --a + ++b;

   printf("%d\n%d\n%d\n", a,b,x);

   return 0;
}