#include<stdio.h>
#include<string.h>
void fib(char a[],int n);
int main()
{
    char f[50],n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    fib(f,n);
}
void fib(char a[],int n)
{
    int i,j,f[50];
    f[0]='a';
    f[1]='b';
    for(i=0;i<n;i++)
    {
        f[2]=strcat(f[0]+f[1]);
        printf("%c",f[3]);

    }
}
