#include<stdio.h>
int main()
{
    int i,j,num,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum=i;
            printf("%d",sum);
        }
    printf("\n");
    }
    return 0;
}
