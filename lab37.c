#include <stdio.h>
int main()
{
  float P,Q,R,S;
  printf("\nEnter the value of 4 resistances");
    scanf("%f %f %f %f",&P,&Q,&R,&S);
    if (P*S == R*Q)
    {
      printf("\nThe Wheatstone Bridge is balanced");
      return (0);
      }
    printf("\nThe Wheatstone Bridge is not balanced");
    S = R*Q/P;
    printf("\nChoose S=%f to balance the bridge", S);
    return (0);
}