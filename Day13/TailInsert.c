#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    for(int i = 1; i <= 5; i++)
    {
        Node *s = (Node *)malloc(sizeof(Node));

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

    Node *p = head;

    printf("尾插法结果：");

    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }

    return 0;
}
