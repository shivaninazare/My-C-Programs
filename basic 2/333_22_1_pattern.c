#include<stdio.h>
int main()
{
    int i,j,limit;
    printf("Enter the limit:\n");
    scanf("%d",&limit);
    for(i=limit;i>0;i--)
    {
        for(j=1;j<=i;j++)
         {
            printf("\t %d",i);
         }
    printf("\n");
    }
    return 0;
}
