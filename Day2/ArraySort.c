// 5つの数字を大きい順に並び変えるArraySort.c
#include <stdio.h>

int main(void)
{
    int nums[5] = {25, 80, 45, 10, 95};

    printf("並び替え前: ");
    for (int i = 0; i < 5; i++)
    { // 出力用ループ
        printf(" %d", nums[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (nums[j] < nums[j + 1])
            {                      // 今見てる数字が右隣の数字を比べて小さければ
                int tmp = nums[j]; // swap
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
            }
        }
    }

    printf("-----------------------\n");
    printf("並び替え後（大きい順");
    for (int i = 0; i < 5; i++)
    { // 出力用ループ
        printf(" %d", nums[i]);
    }
}