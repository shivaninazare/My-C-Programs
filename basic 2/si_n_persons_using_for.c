#include<stdio.h>
int main()
{
    float p,t,r,si;
    int n=1;
    int no_of_person;
    printf("Enter the count of person:\n");
    scanf("%d",&no_of_person);
    for(n=1;n<=no_of_person;n++)
    {
         printf("\n\nEnter the principal amount for %d person:\n",n);
        scanf("%f",&p);
        printf("Enter the rate of interest for %d person:\n",n);
        scanf("%f",&r);
        printf("Enter time for %d person:\n",n);
        scanf("%f",&t);

        si=(p*t*r)/100.0;
        printf("\nSimple interest of %d person is %f",n,si);
    }
    return 0;
}
