#include<stdio.h>
#include<string.h>
int main()
{
    char str1[12]="hello";
    char str2[12]="world";
    char str3[12];
    int len;
    //copy string 1 into string 3
    strcpy(str3,str1);
    printf("strcpy(str3,str1):%s\n",str3);
    //concatenate string 1 and string 2
    strcat(str1,str2);
    printf("strcat(str1,str2):%s\n",str1);
    //total length of string 1 after concatenation
    len=strlen(str1);
    printf("strlen(str1)=%d\n",len);
    return 0;
}
