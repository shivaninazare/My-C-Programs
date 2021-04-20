#include<stdio.h>
#include<math.h>
int main()
{
    int x,terms,i,j,fact,sign=1,k=1;
    float sum;
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    printf("Enter the number of terms:\n");
    scanf("%d",&terms);
    sum=0;
    for(i=1;i<=terms;i++)
    {
        fact=1;
        for(j=1;j<=k;j++)
        {
            fact=fact*j;
        }
             sum=sum+(pow(x,j)/fact)*sign;
             sign=sign*(-1);
             k=k+2;
        }
   printf("sum=%f",sum);
   return 0;
}
