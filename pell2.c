#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)

{
  double p, q, r, t, y;
  double ans, count;
int n;
n=0;
p=0;
r=0;
t=0;
ans=0;

  printf("how many numbers\n");
  scanf("%d", &n);
y=0;
q=0;
count = 0;

  while(n > t)
    {
  p = n - 1;
  r = n - (n + t);
  q = p + r + y;
  ans = 2*q;
  printf("answer %lf\n", &p);
  t = t + 1;
  y = q;
  if(t == 1)
  {
  p=0 ;
  }
}
return 0;
}
