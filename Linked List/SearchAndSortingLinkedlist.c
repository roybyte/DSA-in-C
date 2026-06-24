#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} no;
no *start = NULL;
                                         // int count = 0;
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
                                    // count++;
                                    // return count;
}

// I have written two Sorted a Linked list....
// 1. Insertion Sort               2. Bubble Sort

void sort()                        // int sorting(int count)
{                                  // {
    no *p, *q;                     //       no *temp;
    p = start;                     //        no *ptr;
    int temp;                      //         int q;
    while (p->next != NULL)        //   for (int i = 0; i < count - 1; i++)
    {                              //   {
        q = p->next;               //      ptr = start;
        while (q != NULL)          //       temp = start->next;
        {                          //   for (int j = 0; j < count - i - 1; j++)
            if (p->data > q->data) //  {
            {                      //   if (ptr->data > temp->data)
                temp = p->data;    //   {
                p->data = q->data; //         q = ptr->data;
                q->data = temp;    //         ptr->data = temp->data;
            }                      //          temp->data = q;
            q = q->next;          //       }
        }                         //          ptr = ptr->next;
        p = p->next;             //           temp = temp->next;
    }                           //         }
}                               //      }
                               //    }

void display()
{
    no *temp = start;
    while (temp != NULL)
    {
        printf("Address of %p -> this vlaue %d \n", (void *)temp, temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int Search(int value)
{
    no *ptr = start;
    int n = 1;
    while (ptr != NULL)
    {
        if (ptr->data == value)
        {
            return n;
        }
        n++;
        ptr = ptr->next;
    }
    return -1;
}

int main()
{
    int num, pos;
    AddNode(10);
    AddNode(40);
    AddNode(50);
    AddNode(20);
    AddNode(30);
    AddNode(60);
                                            // SortingNode(count);
    sort();

    display();

    printf("Which number do you want to find?\n");
    scanf("%d", &num);
    pos = Search(num);
    if (pos == -1)
    {
        printf("Sorry, this number is  not listed.\n");
    }
    else
    {
        printf("Position is %d\n", pos);
    }

    return 0;
}
