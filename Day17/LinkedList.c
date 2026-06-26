#include <stdio.h>
#include <stdlib.h>

// 定义链表结点
typedef struct Node
{
    int data;          // 数据域
    struct Node *next; // 指针域
} Node;

//=====================
// 创建链表（尾插法）
//=====================
Node* CreateList()
{
    Node *head = NULL; // 头指针
    Node *tail = NULL; // 尾指针

    // 创建5个结点
    for(int i = 1; i <= 5; i++)
    {
        // 申请一个新结点
        Node *s = (Node*)malloc(sizeof(Node));

        // 数据
        s->data = i * 10;

        // 新结点先指向NULL
        s->next = NULL;

        // 第一个结点
        if(head == NULL)
        {
            head = s;
            tail = s;
        }
        else
        {
            // 尾插法
            tail->next = s;
            tail = s;
        }
    }

    return head;
}

//=====================
// 输出链表
//=====================
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

//=====================
// 求链表长度
//=====================
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

//=====================
// 查找元素
//=====================
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

//=====================
// 主函数
//=====================
int main()
{
    Node *head;

    // 创建链表
    head = CreateList();

    // 输出链表
    printf("链表内容：");
    Print(head);

    // 输出长度
    printf("链表长度：%d\n", Length(head));

    // 查找30
    Node *result = Search(head,30);

    if(result != NULL)
    {
        printf("找到数据：%d\n", result->data);
    }
    else
    {
        printf("没有找到！\n");
    }

    return 0;
}
