#include<stdio.h>
int main()
{
    int n,p,i,j;

    printf("enter no of times:\n");
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
    printf("\nEnter the number:\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("no of ones=0");
    }
    else
    {
    int count=0;
    while(n>2)
    {
        p=n%2;
        if(p==1)
        {
            count++;
        }
        n=n/2;
    }
    printf("number of ones = %d",count+1);
}
}
}
