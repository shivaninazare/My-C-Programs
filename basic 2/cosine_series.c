#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,x,n,k=2,fact=1,sign=1;
    float s;
    printf("Enter the value of x and number of terms:\n");
    scanf("%d%d",&x,&n);
    s=1;
    for(i=1;i<n;i++)
    {
        fact=1;
        for(j=1;j<=k;j++)
        {
            fact=fact*j;
        }
        s=s-((pow(x,k)*sign)/fact);
        sign=sign*(-1);
        k=k+2;
    }
    printf("sum=%f",s);
}
