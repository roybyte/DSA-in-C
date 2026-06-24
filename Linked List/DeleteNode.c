#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} no;
no *start = NULL;

void AddNode(int value)
{
    no *temp, *q;
    temp = (no *)malloc(sizeof(no));
    temp->data = value;
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        q = start;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = temp;
    }
}

void deletNode(int dele)
{
    if (dele < 1)
    {
        printf("Invalid position\n");
        
    }

    if (start == NULL)
    {
        printf("List is empty\n");
        return;
    }

    no *ptr = start, *temp = start;
    if (dele == 1)
    {
        start = start->next;
        free(ptr);
        return;
    }
    else
    {

        for (int i = 1; i < dele; i++)
        {
            ptr = ptr->next;
            if (ptr == NULL)
            {
                printf("Invalid position\n");
               
            }
        }
        if (ptr == NULL)
        {
            printf("Invalid position\n");
            return;
        }

        for (int i = 1; i < dele - 1; i++)
        {

            temp = temp->next;
        }

        temp->next = ptr->next;
        free(ptr);
    }
}

void display()
{
    no *temp = start;
    while (temp != NULL)
    {
        printf("Address of %p -> this vlaue %d \n", (void*)temp, temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int dele;
    AddNode(10);
    AddNode(20);
    AddNode(30);
    AddNode(40);

    printf("Which position you want to deletNode?\n");
    scanf("%d", &dele);

    deletNode(dele);

    display();

    return 0;
}
