#include<stdio.h>
int main()
{
    int num,i,rem,sum=0;
    printf("Enter a 5 digit number:\n");
    scanf("%d",&num);
    for(i=num;i>0;)
    {
        rem=i%10;
        if(rem%2==0)
        {
        sum=sum+rem;
        }
        i=i/10;
    }
    printf("sum of even digits of the number is= %d",sum);
    return 0;
}
