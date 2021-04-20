#include<stdio.h>
int main()
{
    int n,i,c,j,k;

    printf("Enter the number of rows:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(k=4;k>=i;k--)
        {
            printf(" ");
        }
        c=1;
            for(j=1;j<=i;j++)
            {
            printf("%d",c);
            c=c*(i-j)/j;
            }
        printf("\n");
    }
}

