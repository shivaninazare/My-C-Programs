#include<stdio.h>
int main()
{
    int i,j,n,num,sum,a;
    printf("Enter the limit:\n");
    scanf("%d",&n);
    for(i=1;i<=num;i++)
    {
          printf("Enter the number:\n");
          scanf("%d",&num);
          sum=0;
          a=num;
          for(j=1;j<num;j++)
          {
              if(num%j==0)
                sum=sum+j;
          }
          if(sum==a)
          {
              printf("It is a Perfect number\n");
          }
          else
          {
              printf("It is not a perfect number\n");
          }
    }
    return 0;
}
