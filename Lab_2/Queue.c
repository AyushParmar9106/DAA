#include<stdio.h>
int Queue[100];
int f=-1;
int r=-1;
 void enqueue()
 {
    if(f>99)
    {
        printf("\nQueue is overflow");
    }
    else
    {
        printf("\nenter element to enqueue:");
        scanf("%d",&Queue[++f]);
        r++;
    }
 }

 void dequeue()
 {
    if(r== -1)
    {
        printf("\nthe queue is underflow");
        return ;
    }
    printf("\npopd element is : %d",Queue[r]);
    if(r==f)
    {
        r =-1;
        f=r;
    }
    else{
        r++;
    }
 }
 void display()
 {
    if(f == -1)
    {
        printf("\nQuesue is underflow");
    }
    else
    {
        printf("\nthe front element is : %d",Queue[f]);
    }
 }

 int main()
 {
    
    int temp = -1;
    while(1)
    {
        printf("\n1. is for enqueue \n2 for dequeue \n3 for display\n ");
        scanf("%d",&temp);
    
    if(temp==1)
    {
        enqueue();
    }
    else if(temp == 2)
    {
        dequeue();
    }
    else if (temp ==3)
    {
        display();
    }
    else{
        break;
    }
    }
    
 }