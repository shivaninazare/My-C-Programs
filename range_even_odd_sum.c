#include<stdio.h>
int main()
{
    int i,r1,r2,es=0,os=0;
    printf("Enter the range : r1:\n r2:\n");
    scanf("%d%d",&r1,&r2);
    for(i=r1;i<=r2;i++)
    {

        if(i%2==0)
        {
            es=es+i;

        }
        else
        {
            os=os+i;

        }
    }
       printf("even sum=%d",es);
       printf("odd sum=%d",os);
return 0;
}
