#include<stdio.h>
#include<math.h>
int main()
{
    float terms,sum,x,fact;
    float i;
    printf("Enter the number of terms:\n");
    scanf("%f",&terms);
    printf("Enter the value of x:");
    scanf("%f",&x);
    fact=1;
     sum=1;
    for(i=1;i<terms;i++)
    {
        fact=fact*i;
        sum=sum+((pow(x,i)/fact));
    }
    printf("sum=%f",sum);
}
