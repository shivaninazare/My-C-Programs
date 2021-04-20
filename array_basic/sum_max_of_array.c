#include<stdio.h>
#define size 100
void read(int a[],int l);
void display(int a[],int l);
void sum_max(int a[],int l);
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
    sum_max(a,l);
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
void sum_max(int a[],int l)
{
    int i,m,s=0,rem;
    for(i=0;i<l;i++)
    {
        m=0;
        if(a[i]%10!=0)
        {
            while(a[i]%10!=0)
            {
            rem=a[i]%10;
            if(rem>m)
                {
                    m=rem;
                }
            a[i]=a[i]/10;
            }
        }
        else
        {
            a[i]=a[i]/10;
            while(a[i]%10!=0)
            {
            rem=a[i]%10;
            if(rem>m)
            {
                m=rem;
            }
            a[i]=a[i]/10;
            }
        }
        s=s+m;
    }
    printf("\nThe sum of maximum digits of the array elements is = %d",s);
}
