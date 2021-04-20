#include<stdio.h>
#define size 100
void read(int a[],int l);
void display(int a[],int l);
void pn(int a[],int l);
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
    printf("\nThe perfect numbers in the array are:");
    pn(a,l);
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
        printf("\t %d",a[i]);
}
void pn(int a[],int l)
{
    int i,j,r,s,pn;
    for(i=0;i<l;i++)
    {
        s=0;
        for(j=1;j<a[i];j++)
        {
            if(a[i]%j==0)
            s=s+j;
        }
        if(a[i]==s)
        printf("\t %d",a[i]);
    }
    return 0;
}
