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
void Print(Student *head)
{
    Student *p=head;

    printf("\n===== 学生信息 =====\n");

    while(p!=NULL)
    {
        printf("学号:%d\n",p->id);
        printf("姓名:%s\n",p->name);
        printf("成绩:%.1f\n",p->score);
        printf("-----------------\n");

        p=p->next;
    }
}
Student* Search(Student *head,int id)
{
    while(head!=NULL)
    {
        if(head->id==id)
        {
            return head;
        }

        head=head->next;
    }

    return NULL;
}
