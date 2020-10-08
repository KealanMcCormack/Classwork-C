#include <stdio.h>
#include <math.h>
#define MAX_SIZE 100

int main(void)
{
int temp, i, j, q,n,k,l;
int list[MAX_SIZE];


q=n;
i=0;
  printf("how many numbers\n");
  scanf("%d", &n);

  for(n>4;i<n;n++)
  {
    if(i==0)
    {
    i=1 ;
    j=1 ;
    k=1;
    }
    i=n-n+5 ;
    j=n-n+6;
    k=n-n+7;
    l=n-n+8;
    list[i]= k+j;
    list[j]= l+k;
    list[k]= i+l;
    list[l]= i+j;
    printf("%d", list[i]);
  }
}
