//wap to find whether a number lies between 20 and 50
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if(a>20&&a<50)
    {
        printf("The number lies between 20 and 50.");
    }
    else
    {
        printf("The number does not lie between 20 and 50.");
    }
    return 0;
}
