// 構造体を使用した学生名簿StudentProfile.c
#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    int score;
};

int main(void)
{
    struct Student s1; // Student型変数s1を用意
    printf("学籍番号を入力してください: ");
    scanf("%d", &s1.id);
    printf("名前を入力してください:");
    scanf("%s", s1.name); // 配列なので&不要
    printf("点数を入力してください: ");
    scanf("%d", &s1.score);

    printf("-------------------------\n");
    printf("【学生情報】\n");
    printf("学籍番号: %d\n", s1.id);
    printf("名前: %s\n", s1.name);
    printf("点数: %d点\n", s1.score);

    return 0;
}
