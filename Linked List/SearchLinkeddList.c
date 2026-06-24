#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} no;
no *start = NULL;

void AddTrav(int value)
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
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = temp;
    }
}

void search(int ser)
{
    no *q = start;
    int found = 0;

    while (q != NULL)
    {
        if (ser == q->data)
        {
            printf(" yes, it's in list, and address is =  %p\n", &q->data);
            found = 1;

            break;
        }

        q = q->next;
    }
    if (found == 0)
    {
        printf("Sorry, it's not exist in list");
    }
}

int main()
{
    int ser;
    AddTrave(10);
    AddTrave(20);
    AddTrave(30);
    printf("Enter the number to  serach in list ");
    scanf("%d", &ser);

    search(ser);

    return 0;
}
