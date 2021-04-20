//lucas series
#include<stdio.h>
int main()
{
    int limit,f1=3,f2=-1,f3;
    printf("Enter the limit:\n");
    scanf("%d",&limit);
    while(limit>0)
    {
        f3=f1+f2;
        printf("\t%d",f3);
        f1=f2;
        f2=f3;
        limit--;
    }
    return 0;
}
