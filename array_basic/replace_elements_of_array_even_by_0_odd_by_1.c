#include<stdio.h>
#define size 100
void read(int a[],int l);
void display(int a[],int l);
void replace(int a[],int l);
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
    printf("\nThe replaced elements are:-");
    replace(a,l);
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
void replace(int a[],int l)
{
    int i;
    for(i=0;i<l;i++)
    {
        if(a[i]%2==0)
            a[i]=0;
        else
            a[i]=1;
        printf("\t%d",a[i]);
    }
}
