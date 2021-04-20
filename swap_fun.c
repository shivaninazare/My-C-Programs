#include<stdio.h>

void swap_fun(int a,int b);
int main()
{
    int x,y;
    printf("Enter the values:");
    scanf("%d%d",&x,&y);

    swap_fun(x,y);
    return 0;
}
void swap_fun(int a,int b)
{
    int temp;
    printf("Before swapping a=%d\t b=%d \n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping a=%d\t b=%d \n",a,b);
    printf("\n");
}
