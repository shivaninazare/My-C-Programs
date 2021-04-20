#include<stdio.h>
int len(char str[]);
int main()
{
    char str[50],x;
    printf("Enter the string:\n");
    gets(str);
    x=len(str);
    printf("Length of the string : %d",x);
}
int len(char str[])
{
    int i,len=0;
    i=0;
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    return len;
}
