#include<stdio.h>
int main()
{
int N,i;
float sum=0.0;
int fact=1;
printf("Enter the value of N:\n ");
scanf("%d",&N);
for(i=1;i<=N;i++)
    {
        fact=fact*i;
        sum=sum+(float)i/fact;
    }
printf("sum=%f",sum);
return 0;
}
