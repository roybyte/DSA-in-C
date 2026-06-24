#include <stdio.h>
#include <stdlib.h>

// 2. Circulate the list from beginning.

typedef struct node
{
    int data;
    struct node *next;
} no;
no *start = NULL;

void AddNode(int value)
{
    if (start == NULL)
    {
        start = (no *)malloc(sizeof(no));
        start->data = value;
        start->next = start;
    }
    else
    {
        no *ptr, *temp;
        ptr = start;
        while (ptr->next != start)
            ptr = ptr->next;
        temp = (no *)malloc(sizeof(no));
        temp->data = value;
        temp->next = start;
        start = temp;
        ptr->next = start;
    }
}

void ShowCircular()
{
    if (start == NULL)
    {
        printf("List Empty\n");
        return;
    }

    no *temp = start;
    do
    {
        printf("%d\n", temp->data);
        temp = temp->next;

    } while (temp != start);
}

int main()
{
    AddNode(10);
    AddNode(20);
    AddNode(30);
    AddNode(40);
    AddNode(50);

    ShowCircular();

    return 0;
}
