#include<stdio.h>
int main()
{
    int N,num,i,j,sum,a;
    printf("Enter the number:\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("\nEnter the number:");
        scanf("%d",&num);
        sum=0;
        a=num;
        for(j=1;j<num;j++)
        {
            if(num%j==0)
            {
                sum+=j;
            }
        }
                if(sum==a)
                {
                    printf("\nIt is a perfect number");
                }
                else
                {
                    printf("\nIt is not a perfect number");
                }
    }
return 0;
}
