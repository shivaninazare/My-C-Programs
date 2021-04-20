#include<stdio.h>
int main()
{
    int i,n,sum,counter;
    for(counter=1;counter<=10;counter++){
    printf("enter the no N :\n");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("The triangular %d th number is %d\n",n,sum);
}
}
