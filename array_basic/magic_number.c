#include<stdio.h>
#define size 100
void read(int a[],int l);
void display(int a[],int l);
void magic(int a[],int l);
int main()
{
    int l;
    int a[size];
    printf("Enter the array size:-");
    scanf("%d",&l);
    printf("\nEnter the array elements:-");
    read(a,l);
    printf("\nThe array elements are:-");
    display(a,l);
    printf("\nThe magic numbers in the array are:-");
    magic(a,l);
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
void magic(int a[],int l)
{
    int i,rem,rev,ds,k,m,b;
    for(i=0;i<l;i++)
    {
        rev=0;
        ds=0;
        m=a[i];
        while(a[i]>0)
        {
            rem=a[i]%10;
            ds=ds+rem;
            a[i]=a[i]/10;
        }
      k=ds;
      while(ds>0)
      {
          rem=ds%10;
          rev=rev*10+rem;
          ds=ds/10;
      }
      b=k*rev;
      if(b==m)
      {
          printf("\n%d",m);
      }
    }
}
