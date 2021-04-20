//wap to find the sum or difference of two integers using case
#include<stdio.h>
int main()
{
    int n1,n2,choice,res;
    printf("Enter:\n");
    printf("1->Sum\n");
    printf("2->Difference\n");
    printf("Enter a choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("Read the two integer values:");
                scanf("%d%d",&n1,&n2);
                res=n1+n2;
                printf("Sum of %d+%d=%d\n",n1,n2,res);
                break;
        case 2 :printf("Read the two integer values:");
                scanf("%d%d",&n1,&n2);
                res=n1-n2;
                printf("Difference of %d-%d=%d\n",n1,n2,res);
                break;
        default:printf("Invalid choice\n");
    }
 return 0;
}
