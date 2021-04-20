#include<stdio.h>
int main()
{
    int level;
    float bp,ns,gs;
    printf("Enter the basic pay and level number(1-4):");
    scanf("%f%d",&bp,&level);
    switch(level)
    {
        case 1:gs=bp+(bp*0.25)+1000+500;
        break;
        case 2:gs=bp+(bp*0.25)+750+200;
        break;
        case 3:gs=bp+(bp*0.25)+500+100;
        break;
        case 4: gs=bp+(bp*0.25)+250;
        break;
    }
    printf("gross salary is %f",gs);
    if(gs>2000)
    {
        if(gs<=4000)
        {
            ns=gs-(gs*0.03);
        }
        else if((gs>4000)&&(gs<=5000))
        {
            ns=gs-(gs*0.05);
        }
        else if(gs>5000)
        {
            ns=gs-(gs*0.08);
        }
    }
    else
    {
        ns=gs;
    }
    printf("The net salary is %f",ns);
    return 0;
}

