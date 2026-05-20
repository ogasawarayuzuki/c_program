// 5人のスコアを受け取り、最高点平均点を出力するScoreCalc.c
#include <stdio.h>

int main(void)
{
    int scores[5]; // 生徒のスコアを格納する配列

    for (int i = 0; i < 5; i++)
    {
        printf("%d人目の点数: ", i + 1);
        scanf("%d", &scores[i]); // scores[i]の番地に書き込む
    }

    printf("---------------\n");

    int maxscore = 0;
    double avescore = 0;
    for (int i = 0; i < 5; i++)
    {
        if (scores[i] > maxscore)
        {                         // scores[i]がmaxscoreより大きければ
            maxscore = scores[i]; // maxscoreを更新
        }
        avescore += scores[i]; // avescoreにscores[i]を加算
    }
    avescore /= 5; // 平均の計算

    printf("最高点: %d点\n", maxscore);
    printf("平均点: %.1f点\n", avescore);
}