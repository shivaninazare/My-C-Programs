#include<stdio.h>
#define size 50
void read(int [][size],int ,int );
void display(int [][size],int ,int );
void avg(int [][size],int ,int );
int main()
{
    int r,c,a[size][size];
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&r,&c);
    if(r<=size&&c<=size)
    {
        printf("Enter the scores of the students in each quiz in the form of a matrix:\n");
        read(a,r,c);
        printf("In the following matrix rows represent students and columns represent quizzes:\n");
        display(a,r,c);
        avg(a,r,c);
    }
    else
    {
        printf("Exceeded the max size 50");
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
void avg(int a[][size],int r,int c)
{
    int i,j;
    float av,sum;
    for(i=0;i<c;i++)
    {
        sum=0.0;
        for(j=0;j<r;j++)
        {
            sum=sum+a[j][i];
        }
        av=sum/r;
        printf("\nAverage of Quiz %d : %f",i+1,av);
    }
}
