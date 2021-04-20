#include<stdio.h>
void rows(int a[5][3]);
void columns(int a[5][3]);
void read(int a[5][3]);
void display(int a[5][3]);
int main()
{
    int a[5][3];
    printf("Enter number of items sold by each sales man:\n");
    read(a);
    printf("Number of items sold by each sales man:\n");
    display(a);
    rows(a);
    columns(a);
}
void read(int a[5][3])
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void display(int a[5][3])
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void rows(int a[5][3])
{
    int i,j,rs;
    for(i=0;i<5;i++)
    {
        rs=0;
        for(j=0;j<3;j++)
        {
            rs=rs+a[i][j];
        }
        printf("number of items sold by each sales man=%d",rs);
}
void columns(int a[5][3])
{
    int i,j,cs;
    for(i=0;i<3;i++)
    {
        cs=0;
        for(j=0;j<5;j++)
        {
            cs=cs+a[j][i];
        }
        printf("Total sales of each item=%d",cs);
    }
}

