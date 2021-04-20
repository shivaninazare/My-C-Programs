#include<stdio.h>
int main()
{
    int x,acc_bal,rem_bal,w;

    printf("Enter the withdrawal amount which is a multiple of 5 :\n");
    scanf("%d",&x);
    printf("Enter the balance amount:");
    scanf("%d",&acc_bal);
    if(x%5==0)
    {
        w=x+1;
        rem_bal=acc_bal-w;
        printf("The balance remaining is:%d",rem_bal);
    }
    else if(x%5!=0)
    {
        printf("The withdrawal amount is not a multiple of 5");
    }
    return 0;
}
