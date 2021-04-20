//wap to find whether a given number is a palindrome or not
#include<stdio.h>
int main()
{
    int n,ans=0,rem,p;
    printf("Enter a number:\n");
    scanf("%d",&n);
    p=n;
    while(n)
    {
        rem=n%10;
        ans=ans*10+rem;
        n=n/10;
    }
        if(p==ans)
        {
            printf("The number is a Palindrome\n");
        }
        else
        {
            printf("The number is not a Palindrome");
        }
    return 0;
}
