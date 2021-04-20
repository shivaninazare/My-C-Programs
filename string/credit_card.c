#include<stdio.h>
int card(char n[]);
main()
{
    char n[16];
    int s;
    printf("Enter the 16 digit credit card number:\n");
    gets(n);
    s=card(n);
     if(s%10==0)
      {
          printf("Credit card valid");
      }
      else
        printf("Credit card is not valid");
}
int card(char n[])
{
    int i,sum1=-36,sum2=0,sum=0;
    for(i=0;i<16;i++)
    {
        if(i%2==0)
        {
             n[i]=(n[i]-48)*2;
             if((n[i]-48)>=10)
             {
                n[i]=n[i]-9-48;
             }
             sum1=sum1+n[i];
        }
        else
        {
            sum2=sum2+n[i]-48;
        }
    }
    printf("%d\n%d\n",sum1,sum2);
    sum=sum1+sum2;
    return sum;
}
