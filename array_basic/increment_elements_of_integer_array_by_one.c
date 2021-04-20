#include<stdio.h>
void increment_array(int ar2[],int size);
int main()
{
    int ar1[3],sum=0;
    ar1[0]=10;ar1[1]=20;ar1[2]=30;
    sum=ar1[0]+ar1[1]+ar1[2];
    printf("%d\n",sum);

    increment_array(ar1,3);

    sum=ar1[0]+ar1[1]+ar1[2];
    printf("%d\n",sum);
}
void increment_array(int ar2[],int size)
{
    int i;
    for(i=0;i<size;i++)
    ar2[i]++;
}
