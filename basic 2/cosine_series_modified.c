#include<stdio.h>

int main()
{
    float sum=1,x,term=1;
    int n,i;

    printf("Enter the value of x:\n");
    scanf("%f",&x);
    x=x*3.142/180.0;
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        term=-term*x*x/(2*i*(2*i-1));
        sum=sum+term;
    }
    printf("Sum of cos(%f) is %f",x,sum);
    printf("\nIn built function cox(%f)=%f",x,cos(x));
    return 0;
}

