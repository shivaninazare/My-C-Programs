#include<stdio.h>
#define size 100
void read(int a[],int l);
void display(int a[],int l);
void arm(int a[],int l);
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
    printf("\nThe armstrong numbers are:");
    arm(a,l);
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
void arm(int a[],int l)
{
    int i,sum,c,rem;
    for(i=0;i<l;i++)
    {
        sum=0;
        c=a[i];
        while(a[i]!=0)
        {
            rem=a[i]%10;
            sum=sum+rem*rem*rem;
            a[i]=a[i]/10;
        }
        if(sum==c)
        {
            printf("%d",c);
        }
    }
}
