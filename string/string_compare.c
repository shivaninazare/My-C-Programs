#include<stdio.h>
void compare(char a[],char b[]);
main()
{
    char a[50],b[50];
    printf("Enter the string 1:");
    gets(a);
    printf("Enter the string 2:");
    gets(b);
    compare(a,b);
}
void compare(char a[],char b[])
{
    int i,flag;
    for(i=0;a[i]!='\0'||b[i]!='\0';i++)
    {
        if(a[i]-b[i]==0)
            flag=1;
        else
            flag=0;
    }
    if(flag==1)
    {
        printf("The strings are identical");
    }
    else
    {
        printf("The strings are not identical");
    }
}
