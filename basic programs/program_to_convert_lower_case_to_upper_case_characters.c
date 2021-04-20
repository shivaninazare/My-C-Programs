//Program to convert lower case characters to its equivalent upper case characters
#include<stdio.h>
int main()
{
    char lcase,ucase;
    printf("Enter the value in lower case:");
    scanf("%c",&lcase);
    ucase=lcase-32;
    printf("The value in upper case is :%c",ucase);
    return 0;
}
