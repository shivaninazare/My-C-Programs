#include<stdio.h>
int main()
{
    int i,j,sum,n,S;
    printf("Enter the limit :\n");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
        {

            for (j=0;j<=i;j++)
            {
                sum=S+j+i;
                S=sum;
            }
        }
        printf("%d",S);

return 0;
}
