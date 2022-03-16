#include <stdio.h>
int main()
{
  int x1, y1, x2, y2, m1, a1, b1, a2, b2, m2, t;
  printf("Enter the value of x1 and y1:");
  scanf("%d%d", &x1, &y1);
  printf("Enter the value of x2 and y2:");
  scanf("%d%d", &x2, &y2);
  printf("Enter the value of a1 and b1:");
  scanf("%d%d", &a1, &b1);
  printf("Enter the value of a2 and b2:");
  scanf("%d%d", &a2, &b2);
  m1 = ((float)(y2 - y1)) / (x2 - x1);
  m2 = ((float)(b2 - b1)) / (a2 - a1);
  t = m1 == m2;
  printf("if t=1 then lines are parallel, if t=0 lines are not parallel");
  printf("\nt=%d", t);
  return 0;
}