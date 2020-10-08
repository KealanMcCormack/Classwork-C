#include <stdio.h>
#include <math.h>

int main(void)

{
  int count;
  int b, g;
  int ans;
  int h=0;
  int q;
  int e=0;
  int a = 0;

  printf("start no ples :\n");
  scanf("%d", &g);

  q = 1;

  while(q < g)
  {
    b = q+1;
    ans = (a-(a+1)) * b;
    printf("halp %d\n", ans);
    a = ans;
    q = q+1;
  }
  return 0;
}
