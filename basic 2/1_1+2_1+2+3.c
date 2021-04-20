#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number of terms to be added:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            sum=sum+i*(i+1)/2;
    }
   printf("sum=%d\n",sum);
}
