#include<stdio.h>
int main()
{
    int num,n,i,rev,a,rem;
    printf("Enter the limit:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the number:\n");
        scanf("%d",num);
        a=num;
        rev=0;
        for(;num>0;)
        {
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
            if(rev==a)
            {
                printf("The number is a palindrome");
            }
            else
            {
                printf("It is not a palindrome");
            }
        }
        return 0;
}
