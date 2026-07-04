#include "student.h"

// Menu() 在 menu.c 中定义
void Menu();

int main()
{
    Student *head=NULL;

    int choice;

    while(1)
    {
        Menu();

        printf("请输入选择：");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                head=AddStudent(head);
                break;

            case 2:
                Print(head);
                break;

            case 3:
            {
                int id;

                printf("请输入学号：");
                scanf("%d",&id);

                Student *p=Search(head,id);

                if(p!=NULL)
                {
                    printf("找到学生！\n");
                    printf("姓名:%s\n",p->name);
                    printf("成绩:%.1f\n",p->score);
                }
                else
                {
                    printf("没有找到！\n");
                }

                break;
            }

            case 0:

                printf("程序结束！\n");
                return 0;

            default:

                printf("输入错误！\n");
        }
    }
}
