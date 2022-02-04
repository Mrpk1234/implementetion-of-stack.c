#include<stdio.h>
int stack[25],oparetionchoice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
   
{
	 //clrscr();
    top=-1;
    printf("\n Enter the requried size of STACK[MAX=25]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY\n");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.Termineted");
    do
    {
        printf("\n Enter the Choice that you want:");
        scanf("%d",&oparetionchoice);
        switch(oparetionchoice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t Termineted ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(oparetionchoice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
        printf(" Enter a value for push:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The elements after pop is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}
