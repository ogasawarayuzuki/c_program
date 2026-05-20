// 標準入力で金額と人数を受け取って割り勘計算するDutchTreat.c
#include <stdio.h>

int main(void)
{

    int money;
    int people;

    printf("合計金額を入力してください: ");
    scanf("%d", &money); // 金額を受け取る
    printf("人数を入力してください: ");
    scanf("%d", &people); // 人数を受け取ってpeopleに代入
    if (people == 0)
    {
        printf("適切な人数を入力してください\n");
        return 0;
    }
    printf("1人あたり: %d円です\n", money / people);
}