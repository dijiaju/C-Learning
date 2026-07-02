#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//=========================
// 定义学生结点
//=========================
typedef struct Student
{
    int id;                 // 学号
    char name[20];          // 姓名
    float score;            // 成绩
    struct Student *next;   // 指向下一个结点
}Student;

//=========================
// 创建学生链表
//=========================
Student* CreateList()
{
    Student *head = NULL;
    Student *tail = NULL;

    // 第1个学生
    Student *s1 = (Student*)malloc(sizeof(Student));
    s1->id = 1001;
    strcpy(s1->name, "Tom");
    s1->score = 95.5;
    s1->next = NULL;

    head = s1;
    tail = s1;

    // 第2个学生
    Student *s2 = (Student*)malloc(sizeof(Student));
    s2->id = 1002;
    strcpy(s2->name, "Alice");
    s2->score = 88.0;
    s2->next = NULL;

    tail->next = s2;
    tail = s2;

    // 第3个学生
    Student *s3 = (Student*)malloc(sizeof(Student));
    s3->id = 1003;
    strcpy(s3->name, "Bob");
    s3->score = 91.5;
    s3->next = NULL;

    tail->next = s3;
    tail = s3;

    return head;
}

//=========================
// 输出学生信息
//=========================
void Print(Student *head)
{
    Student *p = head;

    while(p != NULL)
    {
        printf("学号：%d\n", p->id);
        printf("姓名：%s\n", p->name);
        printf("成绩：%.1f\n", p->score);
        printf("----------------------\n");

        p = p->next;
    }
}

//=========================
// 主函数
//=========================
int main()
{
    Student *head;

    head = CreateList();

    printf("学生信息如下：\n\n");

    Print(head);

    return 0;
}
