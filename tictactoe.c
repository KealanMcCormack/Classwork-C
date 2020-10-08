#include <stdio.h>
#include <math.h>
#define MAX_SIZE 10
int main(void)
{
int p,q,w,i;
char x,o,O;
char grid[10]={'0','1','2','3','4','5','6','7','8','9'};
for(p=0;p<=9;p++)
{
  printf("player 1 chooses:\n");
  scanf("%d", &i) ;
  grid[i] = 'x';
  printf("%c | %c | %c\n", grid[1],grid[2],grid[3]);
  printf("%c | %c | %c\n", grid[4],grid[5],grid[6]);
  printf("%c | %c | %c\n", grid[7],grid[8],grid[9]);
if (grid[1]=='x' && grid[2]=='x' && grid[3]=='x')
{
printf("x wins");
return 0;
}
if (grid[1]=='x' && grid[4]=='x' && grid[7]=='x')
{
printf("x wins");
return 0;
}
if(grid[2]=='x' && grid[5]=='x' && grid[8]=='x')
{
printf("x wins");
return 0;
}
if(grid[3]=='x' && grid[6]=='x' && grid[9]=='x')
{
printf("x wins");
return 0;
}
if(grid[4]=='x' && grid[5]=='x' && grid[6]=='x')
{
printf("x wins");
return 0;
}
if(grid[7]=='x' && grid[8]=='x' && grid[9]=='x')
{
printf("x wins");
return 0;
}
if(grid[1]=='x' && grid[5]=='x' && grid[9]=='x')
{
printf("x wins");
return 0;
}
if(grid[3]=='x' && grid[5]=='x' && grid[7]=='x')
{
printf("x wins");
return 0;
}
  printf("player 2 chooses:\n");
  scanf("%d", &i) ;
  grid[i] = 'O';
  printf("%c | %c | %c\n", grid[1],grid[2],grid[3]);
  printf("%c | %c | %c\n", grid[4],grid[5],grid[6]);
  printf("%c | %c | %c\n", grid[7],grid[8],grid[9]);
  if(grid[1]=='O' && grid[2]=='O' && grid[3]=='O')
  {
  printf("0 wins");
  return 0;
  }
  if(grid[1]=='O' && grid[4]=='O' && grid['9']=='O')
  {
  printf("0 wins");
  return 0;
  }
  if(grid[2]=='O' && grid[5]=='O' && grid[8]=='O')
  {
  printf("0 wins");
  return 0;
  }
  if(grid[3]=='O' && grid[6]=='O' && grid[9]=='O')
  {
  printf("0 wins");
  return 0;
  }
  if(grid[4]=='O' && grid[5]=='O' && grid[6]=='O')
  {
  printf("0 wins");
  return 0;
  }
  if(grid[7]=='O' && grid[8]=='O' && grid[9]=='O')
  {
  printf("0 wins");
  return 0;
  }
  if(grid[1]=='O' && grid[5]=='O' && grid[9]=='O')
  {
  printf("0 wins");
  return 0;
  }
  if(grid[3]=='O' && grid[5]=='O' && grid[7]=='O')
  {
  printf("0 wins");
  return 0;
  }}}
