#include<stdio.h>
int main()
{
    int x;
    do{
    printf("\n enter the number x:\n");
    scanf("%d",&x);
    printf("\n yes");
    }
    while((x>0)&&(x%3!=0));
}
