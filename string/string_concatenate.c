#include<stdio.h>
void concatenate(char a[],char b[]);
int main()
{
    char a[50],b[50];
    printf("Enter the first string:");
    gets(a);
    printf("Enter the second string:");
    gets(b);
    printf("The concatenated string is :");
    concatenate(a,b);
}
void concatenate(char a[],char b[])
{
    int i,j;
    i=0;
    j=0;
    while(a[i]!='\0')
    {
        i++;
    }
    while(b[j]!='\0')
    {
        a[i]=b[j];
        i++;
        j++;
    }
    a[i]='\0';
     puts(a);
}
