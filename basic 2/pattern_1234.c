#include<stdio.h>
int main()
{
    int rows,i,j,sum=0;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum++;
            printf("\t %d",sum);
        }
        printf("\n");
    }
    return 0;
}
