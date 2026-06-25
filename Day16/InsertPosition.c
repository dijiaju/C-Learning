#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

void Print(Node *head)
{
    Node *p = head;

    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }

    printf("\n");
}

void Insert(Node **head, int pos, int x)
{
    Node *s = (Node *)malloc(sizeof(Node));

    s->data = x;

    if(pos == 1)
    {
        s->next = *head;
        *head = s;
        return;
    }

    Node *p = *head;

    for(int i = 1; i < pos - 1 && p != NULL; i++)
    {
        p = p->next;
    }

    if(p == NULL)
    {
        free(s);
        return;
    }

    s->next = p->next;
    p->next = s;
}

int main()
{
    Node *n1 = malloc(sizeof(Node));
    Node *n2 = malloc(sizeof(Node));
    Node *n3 = malloc(sizeof(Node));
    Node *n4 = malloc(sizeof(Node));

    n1->data = 10;
    n2->data = 20;
    n3->data = 40;
    n4->data = 50;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    Node *head = n1;

    Print(head);

    Insert(&head, 3, 30);

    Print(head);

    return 0;
}
