#include<stdio.h>
void read_m(int m[],int ns);
void highest(int m[],int ns);

int main()
{
    int ns;
    int m[100];
    printf("Enter the number of students(ns):");
    scanf("%d",&ns);
    printf("\nEnter the marks one by one:");
    read_m(m,ns);
    highest(m,ns);
}
void read_m(int m[],int ns)
{
    int i;
    for(i=0;i<ns;i++)
    scanf("%d",&m[i]);
}
void highest(int m[],int ns)
{
    int i,g;
    g=m[0];
    for(i=0;i<ns;i++)
    {
        if(m[i]>g)
            g=m[i];
    }
    printf("Highest marks=%d",g);
}
