#include<stdio.h>
#define size 100
void read(int a[][size],int,int);
void display(int a[][size],int,int);
void sum(int a[size][size],int b[size][size],int r, int c);
int main()
{
    int a[size][size],b[size][size];
    int r1,c1,r2,c2;
    printf("Enter the number of rows columns of matrix 1:\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the number of rows and columns of matrix 2:\n");
    scanf("%d%d",&r2,&c2);
    if((r1<=size&&c1<=size)&&(r2<=size)&&(c2<=size))
    {
      if((c1==c2)&&(r1==r2))
      {
        printf("enter the matrix 1 elements:\n");
        read(a,r1,c1);
        printf("given matrix 1:\n");
        display(a,r1,c1);
        printf("enter the matrix 2 elements:\n");
        read(b,r2,c2);
        printf("given matrix 2:\n");
        display(b,r2,c2);
        printf("Sum of the two matrices:\n");
        sum(a,b,r1,c1);
      }
      else
        printf("c1,r1 are not equal to c2,r2\n");
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
void sum(int a[size][size],int b[size][size],int r, int c)
{
    int i,j,s[size][size];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    display(s,r,c);
}
