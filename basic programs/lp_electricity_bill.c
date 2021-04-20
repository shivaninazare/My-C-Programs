#include<stdio.h>
int main()
{
    float units,bill;
    printf("Enter the units:");
    scanf("%f",&units);
    if(units>50)
    {
        if(units<=150)
            bill=((50*0.5)+((units-50)*0.75));
        else if ((units>150)&&(units<=250))
            bill=((50*0.5)+(100*0.75)+((units-150)*1.20));
        else if(units>250)
            bill=((50*0.5)+(100*0.75)+(100*1.20)+((units-250)*1.5));
    }
    else
    {
        bill=units*0.5;
    }
    printf("bill=%f",bill);
return 0;
}
