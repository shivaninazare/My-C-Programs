#include<stdio.h>
#define size 100

float m();
float v(float q);
float s(float r);
int main()
{
    float x,y,l;
    int i;
    int a[size];
    printf("enter the size :\n");
    scanf("%d",&l);
    printf("enter the array elements:\n");
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    x=m(a);
    printf("mean=%d",x);
    y=v(x);
    printf("variance=%d",y);
    z=sd(y);
    printf("sd=%d",z);
}
float m(float p)
{
    int i,sum=0;
    for(i=0;i<l;i++)
    {
        sum=sum+a[i];
    }
    m=sum/l;
    return(p);
}
float v(float q)
{
    int i;
    for(i=0;i<l;i++)
    {
        d=(a[i]-m)*(a[i]-m);
    }
    v=d/l;
    return(q);
}
