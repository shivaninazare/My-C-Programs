//wap to find the grade based on the marks
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks obtained:\n");
    scanf("%d",&marks);
    if(marks<=100 && marks>=91)
       printf("The grade is 'A'\n");
    else if(marks<=90 && marks>=81)
       printf("The grade is 'B'\n");
    else if(marks<=80 && marks>=71)
       printf("The grade is 'C'\n");
    else if(marks<=70 && marks>=61)
       printf("The grade is 'D'\n");
    else if(marks<60)
       printf("The grade is 'E'\n");
    else
       printf("No grade\n");
    return 0;
}
