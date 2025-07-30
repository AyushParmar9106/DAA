#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *head = NULL;

struct Node *createNewNode()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    printf(" \n Enter the data : ");
    scanf("%d", newNode->data);
    newNode->next = NULL;
    return newNode;
}

void insert_last()
{
    // new node
    struct Node *newNode = createNewNode();
    if (head == NULL)
    {
        head = newNode;
    }
    // node in last
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return;
    free(temp);
}

void delete_last()
{
    if (head == NULL)
    {
        printf(" \n The link list is empty \n");
        return;
    }
    else if (head->next == NULL)
    {
        printf("\n the last element was : %d", head->data);
        head = NULL;
        return;
    }
    struct Node *temp = head;
    struct Node *save = head->next;
    while (save->next != NULL)
    {
        save = save->next;
    }
    temp->next = NULL;
    free(temp);
    free(save);
    return;
}

void print()
{
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    free(temp);
}
void sort(){
    if(head->next == NULL){
        return;
    }
    struct Node *temp = head;
    struct Node *save = head->next;
    //
    
}

void main()
{
    int temp = -1;
    while (1)
    {
        printf("\n1. for insert last \n2. for delete last \n3. for print link list \n4. for sort link list: ");
        scanf("%d", &temp);
        if (temp == 1)
        {
            insert_last();
        }
        else if (temp == 2)
        {
            delete_last();
        }
        else if (temp == 3)
        {
            print();
        }
         else if (temp == 4)
        {
            print();
        }
        else
        {
            break;
        }
    }
    free(head);
}