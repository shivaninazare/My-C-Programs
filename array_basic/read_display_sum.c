#define MAX_SIZE 100
#include<stdio.h>
void read(int list[],int size);
void display(int list[],int size);
int sum(int list[],int size);
int main()
{
    int list[MAX_SIZE];
    int size;
    int i,s=0;
    printf("how many elements do you want to input?\n");
    scanf("%d",&size);
    printf("Address of array=%u\n",list);
    printf("enter the numbers one by one\n");
    read(list,size);
    printf("array elements one by one:\n");
    display(list,size);
    s=sum(list,size);
    printf("sum=%d\n",s);
}
void read(int list[],int size)
{
    int i;
    for(i=0;i<size;i++)
    scanf("%d",&list[i]);
}
void display(int list[],int size)
{
   int i;
   for(i=0;i<size;i++)
   printf("%d\n",list[i]);
}
int sum(int list[],int size)
{
    int i,s=0;
    for(i=0;i<size;i++)
    s+=list[i];
    return s;
}
