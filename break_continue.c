#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i==6)
        //break or continue
        continue;
        printf("%d\n",i);
    }
}
