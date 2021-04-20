#include<stdio.h>
int main()
{
    int i,num,n,sum=0,j,fact,rem,b;
    printf("Enter the limit:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the number:\n");
        scanf("%d",&num);
        b=num;
        for(num=b;num>0;)
        {
            rem=num%10;
            num=num/10;
            fact=1;
            for(j=1;j<=rem;j++)
            {
                fact=fact*j;
            }
            sum=sum+fact;
        }

        if(sum==b)
        {
        printf("strong\n");
        }
        else
        {
        printf("not strong\n");
        }
    }
    return 0;
}
