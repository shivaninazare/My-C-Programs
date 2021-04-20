#include<stdio.h>
#define size 100
void read(int a[],int l);
void display(int a[],int l);
void sort(int a[],int l);
void sort_2(int a[],int l);
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
    printf("\nThe elements in increasing order are:-");
    sort(a,l);
    printf("\nThe elements in decreasing order are:-");
    sort_2(a,l);
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
void sort(int a[],int l)
{
    int i,j,temp;
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-1-i;j++)
         {
             if(a[j]<a[j+1])
             {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
             }
         }
        printf("\t%d",a[j]);
    }
}
void sort_2(int a[],int l)
{
    int i,k,temp2;
    for(i=0;i<l;i++)
    {
        for(k=0;k<l-1-i;k++)
         {
             if(a[k]>a[k+1])
             {
             temp2=a[k];
             a[k]=a[k+1];
             a[k+1]=temp2;
             }
         }
        printf("\t%d",a[k]);
    }
}
