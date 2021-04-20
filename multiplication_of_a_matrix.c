#include<stdio.h>
#define size 100
void read(int a[][size],int,int);
void display(int a[][size],int,int);
void multiply(int a[][size],int b[][size],int r1,int c1,int r2,int c2);
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
      if(c1==r2)
      {
        printf("enter the matrix 1 elements:\n");
        read(a,r1,c1);
        printf("given matrix 1:\n");
        display(a,r1,c1);
        printf("enter the matrix 2 elements:\n");
        read(b,r2,c2);
        printf("given matrix 2:\n");
        display(b,r2,c2);
        printf("product of the 2 matrices:\n");
        multiply(a,b,r1,c1,r2,c2);
      }
      else
        printf("c1 is not equal to r2\n");
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
void multiply(int a[][size],int b[][size],int r1,int c1,int r2,int c2)
{
  int i,j,k,sum,m[size][size];
  for(i=0;i<r1;i++)
  {
      for(j=0;j<c2;j++)
      {
          sum=0;
          for(k=0;k<r2;k++)
          {
            sum=sum+a[i][k]*b[k][j];
          }
          m[i][j]=sum;
      }
  }
    display(m,r1,c2);
}

