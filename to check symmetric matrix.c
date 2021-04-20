#include<stdio.h>
#define s 30
int sym(int a[s][s],int r, int c);
void read(int a[s][s],int r, int c);
void display(int a[s][s],int r, int c);
int main()
{
    int r,c,a[s][s],f;
    printf("Enter r & c:\n");
    scanf("%d%d",&r,&c);
    printf("Enter matrix elements:\n");
    read(a,r,c);
    printf("Matrix elements are:\n");
    display(a,r,c);
    f=sym(a,r,c);
    if(f==1)
    printf("Symmetric matrix");
    else
      printf("Not symmetric matrix");
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
int sym(int a[s][s],int r, int c)
{
    int i,j,f;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[j][i]!=a[i][j])
            {
                f=0;
                return f;
            }
        }
    }
    f=1;
    return f;
}

