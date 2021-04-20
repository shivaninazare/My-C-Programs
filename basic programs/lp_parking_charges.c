#include<stdio.h>
int main()
{
    float h1,m1,h2,m2,et,lt,diff,pc;
    char v;
    printf("enter the type of vehicle:");
    scanf("%c",&v);
    printf("enter the entering time:");
    scanf("%f%f",&h1,&m1);
    printf("\nenter the leaving time:");
    scanf("%f%f",&h2,&m2);

    et=h1+(m1/60.0);
    lt=h2+(m2/60.0);
    diff=lt-et;
    if(v=='f')
    {
        if(diff<=8)
        {
            pc=20.0*diff;
        }
        else
        {
            pc=30.0*diff;
        }
    }
    else if(diff<=8)
    {
        pc=10.0*diff;
    }
    else
    {
        pc=20.0*diff;
    }
    printf("\nthe parking charges=%f",pc);
    return 0;
}
