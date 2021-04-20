#include<stdio.h>
#include<math.h>
#define size 100
void read();
void display();
void mean();
void var();
void sd();
float m,v;
int main()
{
    int l;
    int a[size];
    printf("Enter the array size:-");
    scanf("%d",&l);
    printf("\nEnter the array elements:-");
    read(a,l);
    printf("The array elements are:-");
    display(a,l);
    printf("\nMean=");
    mean(a,l);
    printf("\nVariance=");
    var(a,l);
    printf("\nStandard Deviation=");
    sd(a,l);
    return 0;
}
void read(int a[],int l)
{
    int i;
    for(i=0;i<l;i++)
        scanf("%d",&a[i]);
}
void display(int a[],int l)
{
    int i;
    for(i=0;i<l;i++)
        printf("\t%d",a[i]);
}
void mean(int a[],int l)
{
    int i;
    float sum=0.0;
    for(i=0;i<l;i++)
    {
    sum=sum+a[i];
    }
    m=sum/l;
    printf("%f",m);
}
void var(int a[],int l)
{
  int i;
  float d,sum=0.0,sm;
  for(i=0;i<l;i++)
    {
    sum=sum+a[i];
    }
  m=sum/l;
  sm=0.0;
  for(i=0;i<l;i++)
  {
    d=pow((a[i]-m),2);
    sm=sm+d;
  }
   v=sm/l;
   printf("%f",v);
}
void sd(int a[],int l)
{
  int i;
  float s,d,sm,sum=0.0;
  for(i=0;i<l;i++)
    {
    sum=sum+a[i];
    }
    m=sum/l;
    sm=0.0;
  for(i=0;i<l;i++)
  {
    d=pow((a[i]-m),2);
    sm=sm+d;
  }
  v=sm/l;
  s=sqrt(v);
  printf("%f",s);
}
