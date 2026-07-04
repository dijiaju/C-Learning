#include "student.h"

// 添加学生
Student* AddStudent(Student *head)
{
    Student *s = (Student*)malloc(sizeof(Student));

    printf("请输入学号：");
    scanf("%d",&s->id);

    printf("请输入姓名：");
    scanf("%19s",s->name);

    printf("请输入成绩：");
    scanf("%f",&s->score);

    s->next=head;
    head=s;

    printf("添加成功！\n");

    return head;
}
