#include<stdio.h>
void read(int a[50][50],int r, int c);
void display(int a[50][50],int r, int c);
void norm(int a[50][50],int r, int c);
int main()
{
    int a[50][50],r,c;
    float n;
    printf("Enter row & column size");
    scanf("%d%d",&r,&c);
    printf("Enter matrix elements\n");
    read(a,r,c);
    printf("Matrix elements are:\n");
    display(a,r,c);
    norm(a,r,c);

}
void read(int a[50][50],int r, int c)
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
void display(int a[50][50],int r, int c)
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
void norm(int a[50][50],int r, int c)
{
    int i,j,s;
    float n;
    s=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s=s+a[i][j]*a[i][j];
        }
    }
    n=sqrt(s);
    printf("Norm of matrix=%f",n);
}
