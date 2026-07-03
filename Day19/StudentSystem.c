#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
    int id;
    char name[20];
    float score;
    struct Student *next;
} Student;

// 创建空链表
Student* CreateList()
{
    return NULL;
}

// 打印学生
void Print(Student *head)
{
    Student *p = head;

    printf("\n===== 学生信息 =====\n");

    while(p != NULL)
    {
        printf("学号: %d\n", p->id);
        printf("姓名: %s\n", p->name);
        printf("成绩: %.1f\n", p->score);
        printf("------------------\n");
        p = p->next;
    }
}

// 添加学生（头插法）
Student* AddStudent(Student *head, int id, char name[], float score)
{
    Student *s = (Student*)malloc(sizeof(Student));

    s->id = id;
    strcpy(s->name, name);
    s->score = score;

    // 头插法
    s->next = head;
    head = s;

    return head;
}

int main()
{
    Student *head = CreateList();

    // 添加学生
    head = AddStudent(head, 1001, "Tom", 95.5);
    head = AddStudent(head, 1002, "Alice", 88.0);
    head = AddStudent(head, 1003, "Bob", 91.5);

    // 输出学生
    Print(head);

    return 0;
}
