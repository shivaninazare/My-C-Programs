#include<stdio.h>
#define size 100
void read(int a[],int l);
void display(int a[],int l);
int find(int a[],int l);
int ing;
int main()
{
    int l,k;
    int a[size];
    printf("Enter the array size:-");
    scanf("%d",&l);
    printf("\nEnter the array elements:-");
    read(a,l);
    printf("\nThe array elements are:-");
    display(a,l);
    printf("\nEnter an integer:-");
    scanf("%d",&ing);
    k=find(a,l);
    if(k==ing)
        printf("key element is found\n");
    else
        printf("key element is not found\n");
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
int find(int a[],int l)
{
    int i;
    for(i=0;i<l;i++)
    {
        if(a[i]==ing)
        break;
    }

     return a[i];
}
