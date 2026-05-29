// 最強の名簿自動作成システム
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
    struct Student class[3];

    class[0] = create_student("Ogasawara", 85);
    class[1] = create_student("Saito", 86);
    class[2] = create_student("Seki", 78);

    printf("=== 自動生成されたクラス名簿 ===\n");
    for (int i = 0; i < 3; i++)
    {
        printf("出席番号%d番号: %s (%d点)\n", i + 1, class[i].name, class[i].score);
    }
    return 0;
}
