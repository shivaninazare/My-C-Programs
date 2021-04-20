#include<stdio.h>
#define size 100
void read(int a[][size],int ,int );
void display(int a[][size],int ,int );
int norm_1(int a[][size],int ,int);
int main()
{
    int a[size][size],r,c,x;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&r,&c);
    printf("Enter the array elements :\n");
    read(a,r,c);
    printf("The array elements are:\n");
    display(a,r,c);
    x=norm_1(a,r,c);
    printf("\nnorm-1 of the matrix is=%d",x);
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
int norm_1(int a[][size],int r,int c)
{
    int i,j,m,cs,max;

    for(i=0;i<c;i++)
    {
        cs=0;
        max=a[0][i];
        for(j=0;j<r;j++)
        {
            if(a[j][i]<0)
            {
                a[j][i]=a[j][i]*(-1);
            }
            cs=cs+a[j][i];

        }
        if(cs>max)
            max=cs;
    }
    m=max;
    return m;
}
