// 学生データを自動生成するCreateStudent.c
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int score;
};

struct Student create_student(char *new_name, int new_score)
{
    struct Student new_student;
    strcpy(new_student.name, new_name);
    new_student.score = new_score;

    return new_student;
}

int main(void)
{
    struct Student s1 = create_student("Yuzuki", 83);

    printf("氏名: %s 得点:%d点で保存しました。\n", s1.name, s1.score);
}
