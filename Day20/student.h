#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
    int id;
    char name[20];
    float score;
    struct Student *next;
}Student;

// 函数声明
Student* AddStudent(Student *head);
void Print(Student *head);
Student* Search(Student *head, int id);

#endif
