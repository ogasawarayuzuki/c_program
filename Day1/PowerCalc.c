// べき乗計算を行うPowerCalc.c
#include <stdio.h>

int power(int base, int n)
{
    int answer = base;
    if (n == 0)
    {
        return 1; // 0乗の場合1を返す
    }

    for (int i = 1; i < n; i++)
    {
        answer *= base; // answerにbaseをかける
    }
    return answer; // 計算結果を返す
}
int main(void)
{
    int base, n;
    printf("底を入力してください: ");
    scanf("%d", &base);

    printf("何乗しますか: ");
    scanf("%d", &n);

    int ans = power(base, n); // power関数を呼び出し、返り値をansに代入
    printf("-------------------\n");
    printf("計算結果: %d\n", ans);

    return 0;
}