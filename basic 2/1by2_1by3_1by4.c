#include<stdio.h>
int main()
{
    float terms,i,sum=0;
    printf("Enter the number of terms:");
    scanf("%f",&terms);
    for(i=1;i<=terms;i++)
    {
        sum=sum+(1.0/i);
    }
    printf("Sum=%f",sum);
    return 0;
}
