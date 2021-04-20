#include<stdio.h>
void copy(char a[]);
main()
{
    int a[50];
    printf("Enter the string:");
    gets(a);
    printf("The copied string:");
    copy(a);
}
void copy(char a[])
{
    int i,j;
    char b[50];
    j=0;
    for(i=0;a[i]!='\0';i++)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    puts(b);
}
