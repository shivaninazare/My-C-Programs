//Program to find the area of the rectangle
#include<stdio.h>
int main()
{
    float l,b,area;
    printf("Let's find the area of the rectangle!\n");
    printf("\n Enter the length:");
    scanf("%f",&l);
    printf("\n Enter the breadth:");
    scanf("%f",&b);
    area=l*b;
    printf("\n The area of the rectangle is:%f",area);
    return 0;
}
