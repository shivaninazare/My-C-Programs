#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("enter the no N :");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("The triangular %d th number is %d",n,sum);
}
