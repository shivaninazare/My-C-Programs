#include<stdio.h>
#define size 100
void read(int a[][size],int,int);
void display(int a[][size],int,int);
void pd(int a[][size],int,int);
int trace(int a[][size],int ,int );
int main()
{
    int a[size][size];
    int r,c,T;
    printf("Enter the number of rows columns of matrix :\n");
    scanf("%d%d",&r,&c);
    if(r<=size&&c<=size)
    {
        printf("enter the matrix elements:\n");
        read(a,r,c);
        printf("given matrix :\n");
        display(a,r,c);
        printf("the diagonal elements are:\n");
        pd(a,r,c);
        T=trace(a,r,c);
        printf("trace of the matrix is=%d\n",T);

    }
    else
        printf("exceeded the max size");
}
void read(int a[][size],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
}
void display(int a[][size],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
int trace(int a[][size],int r,int c)
{
    int i,j,sum=0;
    int tr;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    tr=sum;
    return tr;
}
void pd(int a[][size],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                printf("%d\t",a[i][j]);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}
