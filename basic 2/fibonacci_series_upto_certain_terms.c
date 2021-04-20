#include<stdio.h>
int main()
{
    int f1=-1,f2=1,f3,n,sum=0;
    printf("Enter the limit:\n");
    scanf("%d",&n);
    while(sum<=n)
    {
        f3=f1+f2;
        printf("%d \t",f3);
        f1=f2;
        f2=f3;
        sum=f1+f2;
    }
    return 0;
}
