//Program to find simple interest
#include<stdio.h>
int main()
{
    float p,t,r,si;
    printf("Enter the principal amount:\n");
    scanf("%f",&p);
    printf("Enter the time:\n");
    scanf("%f",&t);
    printf("Enter the rate of interest:\n");
    scanf("%f",&r);
    si=(p*t*r)/100;
    printf("Simple interest=%f",si);
    return 0;
}

