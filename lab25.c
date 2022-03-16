#include <stdio.h>
int main(){ 
 float r1,r2,r3,ip,vp,rp;

 printf("enter r1,r2 and r3 =");
 scanf("%f%f%f", &r1,&r2,&r3);

 printf("enter current =");
 scanf("%f", &ip);

 rp = 1/r1+1/r2+1/r3;

 vp = ip*rp;

 printf("voltage in parallel=%f",vp);

 return 0;

}