//wap to convert a positive decimal number to binary equivalent
#include<stdio.h>
int main ()
{
    int a,binary=0,b=1,rem;
    printf("Enter a positive number(0-1023):");
    scanf("%d",&a);
    while(a)
    {
        rem=a%2;
        binary=binary+rem*b;
        a=a/2;
        b=b*10;
    }
    printf("The binary equivalent is:%d",binary);
    return 0;
}
