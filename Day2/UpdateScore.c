// 構造体に関数を渡してデータを書き換えるUpdateScore
#include <stdio.h>
struct Student
{
    int ID;
    char name[50];
    int score;
};

void add_bonus(struct Student *p)
{
    p->score += 10; // ポインタの指す構造体の中身を書き換えられる
}
int main(void)
{
    struct Student s1 = {1280319, "YuzukiOGASAWARA", 93};

    printf("ボーナス前の点数: %d点\n", s1.score);

    add_bonus(&s1);

    printf("------------------------------\n");
    printf("ボーナス後の点数: %d点\n", s1.score);
}