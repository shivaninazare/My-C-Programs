#include<stdio.h>
#define size 50
void read(int a[],int l);
void display(int a[],int l);
void p(int a[],int l);
int main()
{
    int a[size],l;
    printf("Enter the array size:\n");
    scanf("%d",&l);
    printf("Enter the array elements:\n");
    read(a,l);
    printf("Array elements are:\n");
    display(a,l);
    printf("\nRequired array is:\n");
    p(a,l);
}
void read(int a[],int l)
{
    int i;
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[],int l)
{
    int i;
    for(i=0;i<l;i++)
    {
        printf("%d\t",a[i]);
    }
}
void p(int a[],int l)
{
    int i,p;
    for(i=0;i<l-1;i++)
    {
        a[i]=a[i]*a[i+1];
    }
    a[i]=a[i];
    display(a,l);
}
