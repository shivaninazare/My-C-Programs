#include<stdio.h>
int main()
{
    int i,N,sum=0;
    printf("Enter the limit N :");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        sum=sum+i;
    }
    printf("Sum=%d",sum);
    return 0;
}
