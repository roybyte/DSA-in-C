#include <stdio.h>
#include <stdlib.h>

// 2. Circulate the list from beginning.

typedef struct node
{
    int data;
    struct node *next;
} no;
no *head = NULL;

void AddatBenginning(int value)
{
    if (head == NULL)
    {
        head = (no *)malloc(sizeof(no));
        head->data = value;
        head->next = head;
    }
    else
    {
        no *ptr, *temp;
        ptr = head;
        while (ptr->next != head)
            ptr = ptr->next;
        temp = (no *)malloc(sizeof(no));
        temp->data = value;
        temp->next = head;
        head = temp;
        ptr->next = head;
    }
}

void AddatEnd(int value)
{
    if (head == NULL)
    {
        head = (no *)malloc(sizeof(no));
        head->data = value;
        head->next = head;
    }
    else
    {
        no *ptr, *temp;
        ptr = head;
        while (ptr->next != head)
            ptr = ptr->next;
        temp = (no *)malloc(sizeof(no));
        temp->data = value;
        temp->next = head;
        ptr->next = temp;
    }
}

void deletNode(int dele)
{
    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    if (dele < 1)
    {
        printf("Invalid position\n");
        return;
    }

    no *ptr = head;
    no *temp = head;

    // ========= Delete First Node ====== //

    if (dele == 1)
    {
        if (head->next == head)
        {
            free(head);
            head = NULL;
            printf("node delete successfully\n");
            return;
        }

        while (temp->next != head)
            temp = temp->next;

        ptr = head;
        head = head->next;
        temp->next = head;

        free(ptr);

        printf("Node deleted successfully\n");
        return;
    }

    // ========= Delete any other position ========= //

    ptr = head;
    for (int i = 1; i < dele; i++)
    {
        ptr = ptr->next;
        if (ptr == head)
        {
            printf("Invalid Position\n");
            return;
        }
    }

    temp = head;
    for (int i = 1; i < dele - 1; i++)
    {
        temp = temp->next;
    }

    temp->next = ptr->next;
    free(ptr);

    printf("Node deleted successfully\n"); 
}

void display()
{

    int count = 0;
    if (head == NULL)
    {
        printf("List Empty\n");
        return;
    }

    no *temp = head;
    do
    {
        count++;
        printf("Position %d --> %d\n", count, temp->data);
        temp = temp->next;

    } while (temp != head);
}

void ShowCircular()
{
    if (head == NULL)
    {
        printf("List Empty\n");
        return;
    }

    no *temp = head;
    do
    {
        printf(" %d\n", temp->data);
        temp = temp->next;

    } while (temp != head);
}

int main()
{
    head = NULL;
    int ch, num;

    while (1)
    {
        printf("Press 1 - Add at End\n");
        printf("Press 2 - Add at Beginning\n");
        printf("Press 3 - Display All\n");
        printf("Press 4 - Delete from list\n");
        printf("Press 5 - Delete from End\n");
        printf("Press 6 - Exit\n");

        printf("Enter your choice: ");

        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n");
            printf("Enter number: ");
            scanf("%d", &num);
            AddatEnd(num);
            printf("\n");
            break;

        case 2:
            printf("\n");
            printf("Enter number: ");
            scanf("%d", &num);
            AddatBenginning(num);
            printf("\n");
            break;

        case 3:
            printf("\n");
            printf("The list looks like this...\n");
            ShowCircular();
            printf("\n");
            break;

        case 4:
            printf("\n");
            printf("Here the list.\n");
            display();
            printf("Which element to you want to remove in this list?\n");
            printf("Please enter this position: ");
            scanf("%d", &num);
            deletNode(num);
            printf("\n");
            printf("\n");
            printf(".......If you want to check the list, please press 3.\n");
            printf("\n");
            break;
        }
        if (ch == 6)
            break;
    }

    return 0;
}
