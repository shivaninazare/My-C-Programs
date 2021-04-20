#include<stdio.h>
#define size 100
void read(int a[],int l);
void display(int a[],int l);
void s(int a[],int l);
void g(int a[],int l);
int main()
{
   int a[size];
   int l;
   printf("Enter the array size:-");
   scanf("%d",&l);
   printf("\nEnter the array elements:-");
   read(a,l);
   printf("\nThe array elements are:-");
   display(a,l);
   s(a,l);
   g(a,l);
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
        printf("%d\t",a[i]);
}
void s(int a[],int l)
{
    int i,s;
    s=a[0];
    for(i=0;i<l;i++)
    {
     if(a[i]<s)
            s=a[i];
    }
    printf("\nThe smallest element of the array is= %d",s);
}
void g(int a[],int l)
{
    int i,g;
    g=a[0];
    for(i=0;i<l;i++)
    {
     if(a[i]>g)
     {
        g=a[i];
     }
    }
    printf("\nThe largest element of the array is= %d",g);
}
