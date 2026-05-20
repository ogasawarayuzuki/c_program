// 配列の要素をすべて2倍にするプログラムArrayDouble.c
#include <stdio.h>

void double_array(int *arr, int size)
{ // アドレスを格納するint *型変数arrとsize
    // arrにはnumbers配列の先頭アドレスが格納されてる
    for (int i = 0; i < 3; i++)
    {
        arr[i] *= size; // arrに格納されてる住所に書かれたデータをデータのsize倍する
        // arr[i]は*(arr + i)の省略系
    }
}

int main(void)
{
    int numbers[3] = {10, 20, 30};

    printf("2倍にする前の配列:%d %d %d\n", numbers[0], numbers[1], numbers[2]);
    printf("----------------------------------\n");

    double_array(numbers, 2); // numbers配列の先頭アドレスと2を渡す

    printf("2倍にした後の配列: %d %d %d\n", numbers[0], numbers[1], numbers[2]);

    return 0;
}