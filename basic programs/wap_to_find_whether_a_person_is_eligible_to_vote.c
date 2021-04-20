//wap to find whether a person is eligible to vote using if else construct
#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age of the person:\n");
    scanf("%d",&age);
    if(age>18)
    {
        printf("The person is eligible to vote");
    }
    else
    {
        printf("The person is not eligible to vote");
    }
    return 0;
}
