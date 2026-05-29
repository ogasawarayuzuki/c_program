// mallocを用いて人数が自由に変わる名簿システム
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    int score;
};

int main(void)
{
    int member_count;

    printf("何人の学生を登録しますか?: ");
    scanf("%d", &member_count);

    // 人数分の struct Studentの部屋を確保する呪文
    struct Student *class = (struct Student *)malloc(sizeof(struct Student) * member_count);

    printf("---------------------------\n");

    for (int i = 0; i < member_count; i++)
    {
        printf("%d人目の名前を入力してください:", i + 1);
        scanf("%s", class[i].name);

        printf("%d人目の点数を入力してください: ", i + 1);
        scanf("%d", &class[i].score);
    }
    printf("---------------------------\n");
    printf("=== 登録された学生一覧 ===\n");
    for (int i = 0; i < member_count; i++)
    {
        printf("%s (%d点)\n", class[i].name, class[i].score);
    }
    free(class); // mallocの片づけ
    return 0;
}
