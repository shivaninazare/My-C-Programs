#include<stdio.h>
#define s 30
void read(int a[s][s],int r, int c);
void display(int a[s][s],int r, int c);
void maximum(int a[s][s],int r, int c);
int main()
{
    int r,c,a[s][s];
    printf("Enter r & c:\n");
    scanf("%d%d",&r,&c);
    printf("Enter matrix elements:\n");
    read(a,r,c);
    printf("Matrix elements are:\n");
    display(a,r,c);
    maximum(a,r,c);
}
void read(int a[s][s],int r, int c)
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
void display(int a[s][s],int r, int c)
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
void maximum(int a[s][s],int r, int c)
{
    int i,j,max,m,d;
    max=a[0][0];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]>max)
            {
            max=a[i][j];
            m=i;
            d=j;
            }
        }
    }
    printf("city %d has recorded highest temperature %d on day %d",d+1,max,m+1);
}
