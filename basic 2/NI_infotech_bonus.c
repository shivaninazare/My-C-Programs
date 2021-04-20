#include<stdio.h>
int main()
{
    int exp,bonus;
    int n=1;
    while(n<=15)
    {
        printf("\nEnter the number of experience of the employee:\n");
        scanf("%d",&exp);
        if((exp<=7)&&(exp>=5))
        {
            bonus=1060;
        }
        else if((exp<=10)&&(exp>=8))
        {
            bonus=4260;
        }
        else if(exp>10)
        {
            bonus=9630;
        }
        else
        {
            bonus=0;
        }
         printf("\nBonus= %d ",bonus);
        n++;
    }

return 0;
}
