#include<stdio.h>
int main()
{
    int i,n,rem,a,rev,num;
    printf("Enter the limit:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n Enter the number:\n");
        scanf("%d",&num);
        a=num;
        rev=0;
        for(num=a;num>0;)
        {
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        if(rev==a)
        {
            printf("\n Palindrome");
        }
        else
        {
            printf("\n Not a palindrome");
        }
    }
    return 0;
}

