#include<stdio.h>
int main()
{
    int i,sum;
    printf("enter the value for i=");
    scanf("%d",&i);
    sum=0;
    while(i<=200)
    {
        if((i%3!=0)&&(i%5!=0))
            sum=sum+i;
            i++;
    }
    printf("\nsum of the series=%d",sum);
    return 0;
}
