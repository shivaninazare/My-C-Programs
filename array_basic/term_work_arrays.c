#include<stdio.h>
#define size 100
void read(int a[],int l);
void display(int a[],int l);
void prime(int a[],int l);

int main()
{
    int l;
    int a[size];
    printf("enter the array size:");
    scanf("%d",&l);
    printf("\nenter the array elements one by one:");
    read(a,l);
    printf("\nthe array elements are:");
    display(a,l);
    printf("\nthe prime numbers in the array are:");
    prime(a,l);
    return 0;
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
        printf("%d",a[i]);
    }
}
void prime(int a[],int l)
{
    int i,j,count;
    for(i=0;i<l;i++)
    {
        count=0;
        if(a[i]==1)
        {
            count=3;
        }
        else
        {
            for(j=0;j<a[i];j++)
            {
             if(a[i]%j==0)
             {
                count++;
             }
            }
        }
        if(count<=2)
            printf("\t%d",a[i]);
    }
}
