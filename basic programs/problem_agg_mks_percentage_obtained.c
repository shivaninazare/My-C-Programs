#include<stdio.h>
int main()
{
    float physics,chemistry,maths,biology,cs,aggregate_marks,percentage;
    printf("Enter the marks obtained in physics, chemistry, maths, biology, and cs respectively:\n");
    scanf("%f %f %f %f %f",&physics,&chemistry,&maths,&biology,&cs);
    aggregate_marks=physics+chemistry+maths+biology+cs;
    percentage=(aggregate_marks/500)*100;
    printf("Aggregate marks= %f\n Percentage=%f\n",aggregate_marks,percentage);
    return 0;
}
