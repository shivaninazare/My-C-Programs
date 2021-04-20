//wap to find whether a number is divisible by both 3 and 0
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if(a%3==0 && a%6==0)
    {
        printf("The number is divisible by both 3 and 6\n");
    }
    else
    {
        printf("The number is not divisible by both 3 and 6\n");
    }
    return 0;
}
