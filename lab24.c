#include <stdio.h>
#define g 9.8
int main()
{ 
  int u,t;
  float v,s;
  printf("give the initial velocity:");
  scanf("%d",&u);
  t++;
  v = u + g*t;
  s = u*t + 0.5*g*t*t;
  printf("\nVelocity = %f m/s and Distance covered = %f m after 1s",v,s);
  t++; 
  v = u + g*t;
  s = u*t + 0.5*g*t*t;
  printf("\nVelocity = %f m/s and Distance covered = %f m after 2s",v,s);
  t++; 
  v = u + g*t;
  s = u*t + 0.5*g*t*t;
  printf("\nVelocity = %f m/s and Distance covered = %f m after 3s",v,s);
  t++; 
  v = u + g*t;
  s = u*t + 0.5*g*t*t;
  printf("\nVelocity = %f m/s and Distance covered = %f m after 4s",v,s);
  t++;
  v = u + g*t;
  s = u*t + 0.5*g*t*t;
  printf("\nVelocity = %f m/s and Distance covered = %f m after 5s",v,s);

}