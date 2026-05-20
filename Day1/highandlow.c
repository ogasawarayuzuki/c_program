// 数あてゲームhigh&low.c
#include <stdio.h>

int main(void)
{
    int answer = 36; // ゲームの正解
    int value;       // プレイヤーの回答
    int count = 0;   // プレイヤーの回答数

    while (1)
    {
        printf("1~100の数字を当ててみてね: ");
        scanf("%d", &value);

        count++;

        // 例外処理
        if (0 > value || value > 100)
        { // 入力値が0より小さいまたは100より大きい場合
            printf("0~100の値を入力してね\n");
            continue;
        }

        // 回答のヒントの表示
        if (value == answer)
        {
            printf("正解！おめでとう！\n");
            printf("回答数: %d回\n", count); // 回答数を表示
            return 0;
        }
        else if (value < answer)
        { // 回答が正解より大きい場合
            printf("もっと大きいよ！\n");
        }
        else
        {
            printf("もっと小さいよ！\n");
        }
    }
}