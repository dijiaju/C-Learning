#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// 查找函数
Node* Search(Node *head, int x)
{
    Node *p = head;

    while(p != NULL)
    {
        if(p->data == x)
        {
            return p;
        }

        p = p->next;
    }

    return NULL;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // 尾插法创建链表
    int arr[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++)
    {
        Node *s = (Node *)malloc(sizeof(Node));

        s->data = arr[i];
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

    int x = 30;

    Node *result = Search(head, x);

    if(result != NULL)
    {
        printf("找到:%d\n", result->data);
    }
    else
    {
        printf("没找到\n");
    }

    return 0;
}
