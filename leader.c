#include<stdio.h>
void read(int a[50],int );
void display(int a[50],int );
void leader(int a[50],int );
int main()
{
    int a[50],n;

    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter matrix elements\n");
    read(a,n);
    printf("Matrix elements are:\n");
    display(a,n);
    leader(a,n);

}
void read(int a[50],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
            scanf("%d",&a[i]);
    }
}
void display(int a[50],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
            printf("%d\t",a[i]);
    }
}
void leader(int a[50],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=n;j<i;j--)
        {
            if(a[i]>a[i+1])
            {
             printf("%d",a[j]);
            }
        }
    }
}

