#include<stdio.h>
#define size 100
void read(int a[][size],int r,int c);
void display(int a[][size],int r,int c);

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

