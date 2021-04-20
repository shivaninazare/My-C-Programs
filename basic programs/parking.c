#include<stdio.h>
int main()
{
    char v;
    int no_of_hours,charge;
    printf("Enter the type of vehicle (b-bus,f-four wheeler,t-two wheeler)");
    scanf("%c",&v);
    printf("Enter the number of hours the vehicle was parked:");
    scanf("%d",&no_of_hours);
    switch(v)
    {
        case 'B':
        case 'b':charge=no_of_hours*20;
        break;
        case 'F':
        case 'f':charge=no_of_hours*10;
        break;
        case 'T':
        case 't':charge=no_of_hours*5;
        break;
    }
    printf("charge=%d",charge);
    return 0;
}
