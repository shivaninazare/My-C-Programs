#include<stdio.h>
int main()
{
    int u,v,temp;
    printf("Enter the numbers u and v :\n");
    scanf("%d%d",&u,&v);
    while(v!=0)
    {
        temp=u%v;
        u=v;
        v=temp;
    }
    printf("%d",u);
}
