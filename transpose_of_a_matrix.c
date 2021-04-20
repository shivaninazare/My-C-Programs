#include<stdio.h>
#define size 100
void read(int a[][size],int ,int );
void display(int a[][size],int ,int );
void transpose(int a[][size],int ,int );
int main()
{
    int r,c,a[size][size];
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&r,&c);
    if(r<=size&&c<=size)
    {
        printf("Enter the matrix elements:\n");
        read(a,r,c);
        printf("The given matrix is:\n");
        display(a,r,c);
        printf("The transpose of the matrix is:\n");
        transpose(a,r,c);
    }
    else
    {
        ("You have exceeded the maximum size 100\n");
    }
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
void transpose(int a[][size],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[j][i]);
        }
     printf("\n");
    }
}
