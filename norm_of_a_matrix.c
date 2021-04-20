
#include<stdio.h>
#include<math.h>
#define size 100
void read(int a[][size],int,int);
void display(int a[][size],int,int);
float norm(int a[][size],int,int);

int main()
{
    int a[size][size];
    int r,c;
    float n;
    printf("Enter the number of rows and columns of matrix :\n");
    scanf("%d%d",&r,&c);
    if(r<=size&&c<=size)
    {
        printf("enter the matrix elements:\n");
        read(a,r,c);
        printf("given matrix :\n");
        display(a,r,c);
        n=norm(a,r,c);

        printf("the norm of the matrix is=%f\n",n);

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
float norm(int a[][size],int r,int c)
{
    int i,j;
    float N,s=0.0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s=s+(a[i][j]*a[i][j]);
        }
    }
    N=sqrt(s);
    return N;
}
