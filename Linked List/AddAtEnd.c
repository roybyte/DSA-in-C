#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} no;
no *start = NULL;

void addATend(int value)
{
    no *q, *temp;
    temp = (no *)
        malloc(sizeof(no));
    temp->data = value;
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
         q = start;
        while(q->next != NULL)
        {
            q = q->next;
        }
        q->next = temp;
    }
}

void display()
{
    no *temp = start;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    addATend(10);
    addATend(20);
    addATend(30);
    addATend(40);

    display();

    return 0;
}
