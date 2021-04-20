#include<stdio.h>
int main()
{
    int f,i,n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial of the number is : %d",f);
return 0;
}
