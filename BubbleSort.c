// 3つの数字を小さい順に並び変えるBubbleSort.c
#include <stdio.h>

int main(void)
{
    int nums[3];
    printf("3つの数字を入力してください（スペース区切り）");

    for (int i = 0; i < 3; i++)
    { // 配列に数字を格納するためのループ
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (nums[j] > nums[j + 1])
            { // 右側の数字より大きかった場合
                // swapの動作
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    printf("---------------------\n");
    printf("並び替え後（小さい順）: %d %d %d\n", nums[0], nums[1], nums[2]);
    return 0;
}