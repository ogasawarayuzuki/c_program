// 入力された文字列の長さを調べるStrLength.c
#include <stdio.h>

int get_length(char s[])
{
    int count = 0;

    int i = 0;
    while (s[i] != '\0') // nullが出てきたら終了
    {
        count++; // 文字数を更新
        i++;     // iを更新
    }

    return count;
}

int main(void)
{
    char s[100];
    printf("英単語を入力してください: ");
    scanf("%s", s);

    int length = get_length(s);

    printf("-----------------------\n");
    printf("文字数: %d文字\n", length);
    return 0;
}