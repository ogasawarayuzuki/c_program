// 出席番号から学生を特定する（線形探索）LinearSearch.c
#include <stdio.h>
struct Student
{
    int id;
    char name[50];
};

int main(void)
{

    struct Student class[5] = {
        {1, "Ogasawara"},
        {2, "Saito"},
        {3, "Shingai"},
        {4, "Seki"},
        {5, "Takahashi"}};

    int searchId;
    printf("探したい出席番号を入力してください: ");
    scanf("%d", &searchId);

    for (int i = 0; i < 5; i++)
    {
        if (class[i].id == searchId)
        {
            printf("-----------------------\n");
            printf("出席番号%d番は %s さんです！\n", class[i].id, class[i].name);
            break;
        }
    }
}