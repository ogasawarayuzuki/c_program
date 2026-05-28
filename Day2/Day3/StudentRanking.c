// 構造体の配列をソートし、テストの点数ランキングをつくるStudentRanking.c
#include <stdio.h>

struct Student
{
    char name[50];
    int score;
};

int main(void)
{
    struct Student class[3] = {
        {"Yuzkuki", 80},
        {"Shinji", 30},
        {"Riko", 96}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (class[j].score < class[j + 1].score)
            {
                struct Student tmp = class[j];
                class[j] = class[j + 1];
                class[j + 1] = tmp;
            }
        }
    }
    printf("--- テスト結果ランキング ---\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d位: %s (%d点)\n", i + 1, class[i].name, class[i].score);
    }
}