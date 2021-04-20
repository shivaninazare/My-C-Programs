#include<stdio.h>
int main()
{
    int num,rev,rem,rm,a,p,sum=0,dsum;
    printf("Enter the number:\n");
    scanf("%d",&num);
    a=num;
    for(num=num;num!=0;num=num/10)
    {
        rem=num%10;
        sum=sum+rem;
    }
    rev=0;
    dsum=sum;
    while(sum)
    {
        rm=sum%10;
        rev=rev*10+rm;
        sum=sum/10;
    }
    p=dsum*rev;
    if(p==a)
        printf("Magic number\n");
    else
        printf("Not a magic number");
    return 0;
}
