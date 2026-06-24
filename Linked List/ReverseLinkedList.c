#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}no;
no *start = NULL;

void addATend(int value){
    no *temp;
    temp = (no*) malloc(sizeof(no));
    temp->data = value;
    temp->next = start;
    start =temp;
}

void display()
{
    no *temp = start;
    while (temp != NULL)
    {
        printf(" value %d  or address %d-> \n", temp->data, temp->next);
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
