#include<stdio.h>
int main()
{
    float terms,i,sum=0,sign=1;
    printf("Enter the number of terms:\n");
    scanf("%f",&terms);
    for(i=1;i<=terms;i++)
    {
        sum=sum+(1.0/i)*sign;
        sign=sign*(-1);
    }
    printf("sum=%f",sum);
    return 0;
}
