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

    for(int i = 1; i <= 5; i++)
    {
        Node *s = (Node *)malloc(sizeof(Node));

        s->data = i;

        // 头插法核心
        s->next = head;
        head = s;
    }

    Node *p = head;

    printf("头插法结果：");

    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }

    return 0;
}
