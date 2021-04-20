#include<stdio.h>
void prime(int n);
int n;
int main()
{
    int i,j,lim;
    printf("enter the limit:");
    scanf("%d",&lim);
    for(j=1;j<=lim;j++)
    {
    printf("\nEnter the number :");
    scanf("%d",&n);

    prime(n);
    }
    return 0;
}
void prime(int n)
{
    int i,count=0;
    if(n==1)
        count=3;
    else
    {
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }
    }
        if(count<=2)
            printf("Prime number");
        else
            printf("Not a prime number");
}
