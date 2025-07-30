#include<stdio.h>
#define SIZE 100
 int Stack[SIZE];
 int top=-1,n;

 void push()
 {
    if(top>SIZE)
    {
        printf("\nstack is overflow");
    }
    else
    {
        // printf("%d\n", top);
        top++;
        // printf("%d\n", top);
        printf("enter a number to push:");
        scanf("%d",&Stack[top]);
        
    }
   
    return;
 }
void pop()
{
    if(top==-1)
    {
        printf("stack is underflow");

    }
    else
    {
        printf("\n%d\n",Stack[top]);
        top--;
        return;
    }
}
void peep()
{
    if(top<0)
    {
        printf("\nunderflow");

    }
    else{
        printf("\n%d",Stack[top]);
        return;
    }
}

 int main()
 {
    

    int temp = -1;
    while(1)
    {
        printf("\n1. is for push \n2 for pop \n3 for peep\n ");
        scanf("%d",&temp);
    
    if(temp==1)
    {
        push();
    }
    else if(temp == 2)
    {
        pop();
    }
    else if (temp ==3)
    {
        peep();
    }
    else{
        break;
    }
    }
 }
