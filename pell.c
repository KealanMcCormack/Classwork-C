#include <stdio.h>
#include <math.h>

int main(void)

{
  int p, n, q, r, t;
  int ans, count;

n=0;

  printf("how many numbers?\n");
  scanf("%d", &n);

q=0;
count = 0;

  while(n > 0)
    {
  p = (n - 1);
  t = 2 * p;
  printf("%d\n", &p);
  ans = t + (n-2) ;
  r = ans + q;
  printf("answer %d\n", &r);
  q = r;
  n = n-1;
  count = count + 1;
    }
return 0;
}
