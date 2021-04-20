#include<stdio.h>
#define size 100
void read(int a[][size],int r,int c);
void display(int a[][size],int r,int c);
void skew(int a[][size],int r,int c);
int main()
{
    int a[size][size],r,c;
    printf("Enter the numbers of rows and columns:\n");
    scanf("%d%d",&r,&c);
    if(r==c)
    {
        printf("Enter the array elements:\n");
        read(a,r,c);
        printf("The matrix is :\n");
        display(a,r,c);
        skew(a,r,c);
    }
    else
    {
        printf("Number of rows and columns are not equal.");
    }
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
void skew(int a[][size],int r,int c)
{
    int i,j,x;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           if((a[i][j])==(-a[j][i])||(a[j][i])==(-a[i][j]))
           x=1;
           else
           x=0;
        }
    }
      if(x==1)
        printf("It is a skew symmetric matrix");
      else
        printf("It is not a skew symmetric matrix");
}

