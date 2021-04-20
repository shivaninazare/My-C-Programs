#include<stdio.h>
int main()
{
    int r1,r2,p,i,j;
    printf("Enter the range- r1:  r2:  ");
    scanf("%d%d",&r1,&r2);
    for(i=1;i<=10;i++)
    {
        for(j=r1;j<=r2;j++)
        {
            p=i*j;
            printf("%d \t ",p);
        }
        printf("\n");
     }
}
