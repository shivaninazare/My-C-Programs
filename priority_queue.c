#include<stdio.h>
#include<stdlib.h>
#define size 5
 int choice,item,f,r,q[10];
    f=0;
    r=-1;
void insert(int item,int q[],int *r);
void display();
void delete(int q[],int *f,int *r);
void main()
{


    for(;;)
    {
        printf("1.insert 2.delete\n");
        printf("3.display 4.exit\n");
        printf("Enter the choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter the number to be inserted:\n");
                    scanf("%d",&item);
                    insert(item,q,&r);
                    break;
            case 2: delete(q,&f,&r);
                    break;
            case 3: display(q,f,r);
                    break;
            default: exit(0);

        }
    }
}
void delete(int q[],int *f,int *r)
{
    if(*f>*r)
    {
        printf("Queue underflow\n");
    }
    printf("The element deleted is %d\n",q[(*f)++]);
    if(*f>*r) *f=0,*r=-1;
}
void display()
{
    int i;
    if(f>r)
    {
        printf("Queue empty\n");
    }
    printf("Contents of the queue:\n");
    for(i=f;i<=r;i++)
    {
        printf("%d\n",q[i]);
    }
}
void insert(int item,int q[],int *r)
{

    int j;
    if(*r==size-1)
    {
        printf("Queue full\n");
    }
    j=*r;
    while(j>=0&&item<q[j])
    {
        q[j+1]=q[j];
        j--;
    }
    q[j+1]=item;
    *r=*r+1;
}
