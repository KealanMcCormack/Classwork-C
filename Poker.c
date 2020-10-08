#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
  srand(time(NULL));
  char array[14] = {"A23456789TJQK"};
  printf("%c %c\n",array[rand()%13],array[rand()%13]);
  printf("%c %c %c %c %c\n",array[rand()%13],array[rand()%13],array[rand()%13],array[rand()%13],array[rand()%13]);
}
