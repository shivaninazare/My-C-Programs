//nested if activity
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter the two numbers x and y:\n");
  scanf("%d%d",&x,&y);
  if(x!=y)D
  {
      if(x<y)
      {
         printf("%d is lesser than %d",x,y);
      }
      else
      {
         printf("%d is greater than %d",x,y);
      }
  }
  else
      printf("x is equal to y");
  return 0;
}
