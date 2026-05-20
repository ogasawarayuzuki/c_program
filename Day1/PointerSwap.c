// 2つの数字を入れ替えるPointerSwap.c
#include <stdio.h>

void swap(int *x, int *y)
{                  // 住所に書き込まれた値を見る
    int temp = *x; // tempにaの値を仮置き
    *x = *y;       // aの値をbに更新
    *y = temp;     // bの値を仮置きしたtempに更新
}

int main(void)
{
    int a = 10;
    int b = 20;

    printf("入れ替え前: a = %d, b = %d \n", a, b);
    printf("-------------------------------\n");

    swap(&a, &b); // a,bの値が書き込まれている住所を渡す
    printf("入れ替え後:a = %d, b = %d\n", a, b);

    return 0;
}