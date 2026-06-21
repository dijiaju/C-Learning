#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

int Length(Node *head)
{
    int count = 0;

    Node *p = head;

    while(p != NULL)
    {
        count++;
        p = p->next;
    }

    return count;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    for(int i=1;i<=5;i++)
    {
        Node *s = (Node*)malloc(sizeof(Node));

        s->data = i;
        s->next = NULL;

        if(head == NULL)
        {
            head = s;
            tail = s;
        }
        else
        {
            tail->next = s;
            tail = s;
        }
    }

    printf("长度=%d\n", Length(head));

    return 0;
}
