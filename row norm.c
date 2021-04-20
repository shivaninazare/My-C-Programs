#include<stdio.h>
void rnorm(int a[50][50],int r, int c);
void cnorm(int a[50][50],int r, int c);
void read(int a[50][50],int r, int c);
void display(int a[50][50],int r, int c);
int main()
{
    int a[50][50],r,c;
    printf("Enter row & column size");
    scanf("%d%d",&r,&c);
    printf("Enter matrix elements\n");
    read(a,r,c);
    printf("Matrix elements are:\n");
    display(a,r,c);
    rnorm(a,r,c);
    cnorm(a,r,c);

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
void rnorm(int a[50][50],int r, int c)
{
    int i,j,si,max,s[50];
    for(i=0;i<r;i++)
    {
        s[i]=0;
        for(j=0;j<c;j++)
        {
            if(a[i][j]<0)
            {
            a[i][j]=a[i][j]*-1;
            }
            s[i]=s[i]+a[i][j];
        }
        max=s[0];
        if(s[i]>max)
        max=s[i];
    }
    printf("Maximum of row sum=%d\n",max);
}
void cnorm(int a[50][50],int r, int c)
{
    int i,j,max,s[50];
    for(i=0;i<c;i++)
    {
        s[i]=0;
        for(j=0;j<r;j++)
        {
            if(a[j][i]<0)
                a[j][i]=a[j][i]*-1;
            s[i]=s[i]+a[j][i];
        }
        max=s[0];
        if(s[i]>max)
        max=s[i];
    }
    printf("Maximum of column sum=%d",max);
}
