
#include<stdio.h>
int main()
{
    int i,N,p;
    printf("Enter the number N :");
    scanf("%d",&N);
    printf("Multiplication table:");
    for(i=1;i<=10;i++)
    {
        p=N*i;
    printf("%d\n",p);
    }
    return 0;
}
