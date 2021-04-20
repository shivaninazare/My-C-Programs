#include<stdio.h>
#define size 100
void read(int a[][size],int r,int c);
void display(int a[][size],int r,int c);
void slt(int a[][size],int r,int c);
void lt(int a[][size],int r,int c);
void sut(int a[][size],int r,int c);
void ut(int a[][size],int r,int c);
int main()
{
    int a[size][size];
    int r,c;
    printf("Enter the number of rows:\n");
    scanf("%d",&r);
    printf("Enter the number of columns:\n");
    scanf("%d",&c);
    printf("enter the matrix elements:\n");
    read(a,r,c);
    printf("given matrix:\n");
    display(a,r,c);
    printf("strict lower triangular:\n");
    slt(a,r,c);
    printf("lower triangular:\n");
    lt(a,r,c);
    printf("strict upper triangular:\n");
    sut(a,r,c);
    printf("upper triangular:\n");
    ut(a,r,c);
    return 0;
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
void slt(int a[][size],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i>j)
                  printf("%d\t",a[i][j]);
            else
                 printf(" \t");
        }
        printf("\n");
    }
}
void lt(int a[][size],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i>=j)
                  printf("%d\t",a[i][j]);
            else
                 printf(" \t");
        }
        printf("\n");
    }
}
void sut(int a[][size],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i<j)
                  printf("%d\t",a[i][j]);
            else
                 printf(" \t");
        }
        printf("\n");
    }
}
void ut(int a[][size],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i<=j)
                  printf("%d\t",a[i][j]);
            else
                 printf(" \t");
        }
        printf("\n");
    }
}
