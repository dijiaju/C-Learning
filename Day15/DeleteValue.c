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

void Delete(Node **head, int x)
{
    Node *p = *head;
    Node *pre = NULL;

    while(p != NULL)
    {
        if(p->data == x)
        {
            if(pre == NULL)
            {
                *head = p->next;
            }
            else
            {
                pre->next = p->next;
            }

            free(p);
            return;
        }

        pre = p;
        p = p->next;
    }
}

int main()
{
    Node *n1 = malloc(sizeof(Node));
    Node *n2 = malloc(sizeof(Node));
    Node *n3 = malloc(sizeof(Node));
    Node *n4 = malloc(sizeof(Node));

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;
    n4->data = 40;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    Node *head = n1;

    Print(head);

    Delete(&head, 30);

    Print(head);

    return 0;
}
