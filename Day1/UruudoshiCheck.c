// 標準入力で西暦を受け取ってうるう年か判断するUruudoshiCheck.c

#include <stdio.h>

// int main(void) {
//     int year;

//     printf("西暦を入力してください: ");
//     scanf("%d", &year); //西暦を受け取りyearアドレスに格納

//     if(year % 4 == 0) { //西暦が4で割り切れる場合
//         if(year % 100 == 0) { //4で割れるかつ100で割り切れる
//             if(year % 400 == 0) {//4で割り切れるかつ100で割り切れるかつ400で割り切れる
//                 printf("%d年はうるう年です！\n",year);
//             }else {
//                 printf("%d年は平年です。\n",year);
//             }
//         } else {
//             printf("%d年はうるう年です！\n",year);
//         }
//     } else {
//         printf("%d年は平年です。\n",year);
//     }
// }

int main(void)
{
    int year;

    printf("西暦を入力してください: ");
    scanf("%d", &year); // 西暦を受け取りyearアドレスに格納

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    { // 西暦が4で割り切れるかつ100で割り切れない数または400で割り切れる数
        printf("%d年はうるう年です！\n", year);
    }
    else
    {
        printf("%d年は平年です。\n", year);
    }
}