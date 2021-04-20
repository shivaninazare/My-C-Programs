#include<stdio.h>
#define size 100
void read(int num[],int l);
void reverse(int num[],int l);
int main()
{
    int num[size];
    int l;
    printf("Enter the limit:");
    scanf("%d",&l);
    printf("\nEnter the numbers one by one:");
    read(num,l);
    reverse(num,l);

}
void read(int num[],int l)
{
    int i;
    for(i=0;i<l;i++)
        scanf("%d",&num[i]);
}
void reverse(int num[],int l)
{
    int rem,i,j,rev;
    for(i=0;i<l;i++)
    {
        rev=0;
        while(num[i]!=0)
        {
            rem=num[i]%10;
            rev=rev*10+rem;
            num[i]=num[i]/10;
        }
        printf("reverse=%d\n",rev);
    }
}
