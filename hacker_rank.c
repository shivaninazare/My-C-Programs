#include<stdio.h>
#define size 6
void read(int m[][size]);
int findmaxsum(int m[][size]);
int main()
{
    int m[size][size];
    int res;
    printf("Enter the matrix:\n");
    read(m);
    res=findmaxsum(m);
    printf("Maximum sum of hourglass is= %d",res);
}
void read(int m[][size])
{
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
}

int findmaxsum(int m[][size])
{
    int max_sum=0,i,j,sum;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            sum=m[i][j]+m[i][j+1]+m[i][j+2]+m[i+1][j+1]+m[i+2][j]+m[i+2][j+1]+m[i+2][j+2];
            if(sum>max_sum)
                max_sum=sum;
        }
    }
    return max_sum;
}
