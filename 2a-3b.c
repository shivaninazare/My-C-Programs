#include<stdio.h>
#define size 100
void read(int x[][size],int ,int );
void display(int x[][size],int ,int );
void sum(int x[][size],int y[][size],int ,int);
int main()
{
    int a[size][size],b[size][size],r,c;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&r,&c);
    printf("Enter the array elements of matrix 1:\n");
    read(a,r,c);
    printf("Enter the array elements of matrix 2 :\n");
    read(b,r,c);
    printf("matrix 1:\n");
    display(a,r,c);
    printf("matrix 2:\n");
    display(b,r,c);
    printf("resulting matrix:\n");
    sum(a,b,r,c);
}
void read(int x[][size],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
}
void display(int x[][size],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
}
void sum(int a[][size],int b[][size],int r,int c)
{
    int i,j,s[size][size];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           s[i][j] =2*a[i][j]-3*b[i][j];
        }
    }
    display(s,r,c);
}
