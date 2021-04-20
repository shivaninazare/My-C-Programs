//C program to simulate stack operations

#include<stdio.h>
#include<stdlib.h>
#define MAX 100

struct STACK
{
	int data[MAX];
	int top;
};
typedef struct STACK stack;
int POP(stack *ps);
void PUSH(stack *ps,int num);
void DISPLAY(stack s);

int main()
{
	stack s;
	int ch,num,x;
	s.top=-1;//Initially stack top points to -1
	while(ch!=4)
	{
		printf("\n1:PUSH \n2:POP \n3:DISPLAY \n4:EXIT");
		printf("\nEnter any option[1-4]:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\nEnter the element to be pushed into stack\n");
				scanf("%d",&num);
				PUSH(&s,num);
				break;
			case 2:x=POP(&s);
				if(x!=-1)
				{
				   printf("\n%d is poped",x);
				}
				break;
			case 3: DISPLAY(s);
                    break;
            case 4: exit(0);

			default : printf("Please Enter correct Choice\n");
		}//end void DISPLAY(stack s)of switch
	}//end of while loop
return 0;
}//end of main function
int full(stack s)
{
	if(s.top==MAX-1)
		return(1);
	else
		return(0);
}

int empty(stack s)
{
	if(s.top==-1)
		return(1);
	else
		return(0);
}

void PUSH(stack *ps,int num)
{
	if(full(*ps))
	{
		printf("\nStack is Overflowing please stop to push into stack....... :( \t :(\t :( !!\n");
		return;
	}
	ps->top++;
	ps->data[ps->top]=num;
	return;
}

int POP(stack *ps)
{
	int temp;

	if(empty(*ps))
	{
		printf("\nStack is Underflowing please stop deleting elements from stack :( \n ");
		return;
	}
	temp=ps->data[ps->top];
	ps->top--;
	return(temp);
}

void DISPLAY(stack s)
{
	int i;
	if(empty(s))
	{
		printf("\nStack is empty\n");
		return;
	}
	for(i=s.top; i>=0; i--)
	{
		printf("%d\t",s.data[i]);
	}
	printf("\n");
}
