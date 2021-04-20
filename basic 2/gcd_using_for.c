#include<stdio.h>
int main()
{
    int u,v,t;
    printf("Enter the two numbers u and v:");
    scanf("%d%d",&u,&v);
    for(u=u;v!=0;u=u+0)
   {
        t=u%v;
        u=v;
        v=t;
   }
    printf("GCD=%d",u);
return 0;
}
