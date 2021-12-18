#include <stdio.h>
#include <stdlib.h>
int stack[100],choice,p,top,a,i;
void push(void);
void pop(void);
void display(void);
int main()
{
   printf("SEC:N_NAME:AYUSH_NEGI_ROLLNO:2018266");
   top=-1;
   printf("\n ENTER THE SIZE OF STACK [MAX=100]: ");
   scanf("%d",&p);
   printf("\n\t STACK OPERATIONS USING ARRAY ");
   printf("\n\t 1.push\n\t 2.pop\n\t 3.display\n\t 4.exit");
   do
   {
       printf("\n enter the choice:\n");
       scanf("%d",&choice);
       switch(choice)
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
            printf("\n exit point");
            break;
        }
    default:
        {
            printf("\n please enter a valid choice(1/2/3/4)");
        }
      }
   }
   while(choice!=4);
   return 0;
}
void push()
{
    if(top>=p-1)
    {
        printf("\n\t OVERFLOW STACK");
    }
    else
    {
        printf("enter a value to be pushed:");
        scanf("%d",&a);
        top++;
        stack[top]=a;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t UNDER FLOW STACK");

    }
    else
    {
        printf("\n\t the popped element is:%d",stack[top]);
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n ENTER ELEMENT IN STACK\n");
        for(i=0;i<=0;i++)
            printf("\n%d",stack[i]);
        printf("\n PRESS NEXT CHOICE");
    }
    else
    {
        printf("\n EMPTY STACK");
    }
}
