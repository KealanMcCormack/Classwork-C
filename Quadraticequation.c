#include <stdio.h>
#include <math.h>

int main(void)

{

double a,b,c;
double r1,r2,r3,r4;
double discriminant;
printf("please enter the value for a:\n");
scanf("%lf", &a) ;
printf("please enter the value for b:\n");
scanf("%lf", &b) ;
printf("please enter a value for c:\n");
scanf("%lf", &c) ;

r1 = (-b + sqrt(b*b - 4*a*c)) / (2*a) ;
r2 = (-b - sqrt(b*b - 4*a*c)) / (2*a) ;

printf("the value of the root is %f\n", r1);
printf("the value of the root is %f\n", r2);

if(a == 0)
{
  printf("Quadratic cannot contain a 0");
  return 0;
}

if((b*b - 4*a*c) < 0 );
{
  int i;
  i == i;
  r1 = ((-b) / (2*a));
  r2 = (sqrt(-(b*b - 4*a*c))) / (2*a) ;
  r3 = ((-b) / (2*a));
  r4 = (sqrt(-(b*b - 4*a*c))) / (2*a) ;
  printf("the value of the root is %f + %fi\n", r1, r2);
  printf("the value of the root is %f - %fi\n", r3, r4);
  return 0;
}
}
