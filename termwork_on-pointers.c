//program to reverse the digits of a number using pointers
#include<stdio.h>
int reverse(int *);
int main()
{
   int *p;
   int n,rev;
   printf("Enter the number:");
   scanf("%d",&n);
   p=&n;
   rev=reverse(&n);
   printf("The reverse of a number is = %d",rev);
   return 0;
}
int reverse(int *p)
{
    int d,rev=0;
    while(*p>0)
    {
        d=*p%10;
        rev=rev*10+d;
        *p=*p/10;
    }
    return rev;
}
