#include<stdio.h>
#define size 100
void read(int a[],int l);
void display(int a[],int l);
void inc(int a[],int l);
void dec(int a[],int l);

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
    printf("\nincreasing order:");
    inc(a,l);
    printf("\ndecreasing order");
    dec(a,l);

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
void inc(int a[],int l)
{
    int i,g;
    for(i=0;i<l;i++)
    {
       if(a[i]<a[i+1]){
        g=a[i];
       break;
       }
       else{
        g=a[i+i];
       }
    printf("\t%d",g);
    }
}
void dec(int a[],int l)
{
    int i,g;
    for(i=0;i<l;i++)
    {
       if(a[i]>a[i+1]){
        g=a[i];
       break;
       }
       else{
        g=a[i+i];
       }
    printf("\t%d",g);
    }
}

