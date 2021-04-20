#include<stdio.h>
int main()
{
    int r1,r2,rem,n,rev,ans,ncopy;
    printf("Enter the range r1 and r2:\n");
    scanf("%d%d",&r1,&r2);
    for(n=r1;n<=r2;n++)
    {
        rev=0;
        ncopy=n;
        while(ncopy)
        {
            rem=ncopy%10;
            rev=rev*10+rem;
            ncopy=ncopy/10;
        }
        printf("%d\t",rev);
    }
}
