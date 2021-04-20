#include<stdio.h>
int main()
{
int i,sum=0;
for(i=100;(i<=200);i++)
{
    if((i%3!=0)&&(i%5!=0))
    sum=sum+i;

}
printf("Sum= %d",sum);
return 0;
}
