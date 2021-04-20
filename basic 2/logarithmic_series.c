#include<stdio.h>
int main()
{
    float terms,x,i,j;
    float S,sum;
    printf("Enter the number of terms:\n");
    scanf("%f",&terms);
    printf("Enter the value of x:\n");
    scanf("%f",&x);
    S=((x-1)/x);
    sum=S;
    for(i=2;i<=terms;i++)
    {
            sum=sum+(pow(S,i)*(1.0/2.0));
    }
    printf("sum=%f",sum);
    return 0;
}
