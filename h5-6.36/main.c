#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

void stringReverse(const char str[]);

int main(void)
{
    char str[SIZE];

    printf("Enter a string: ");
    fgets(str, SIZE, stdin);

    // 去除 fgets 讀入的換行字元 '\n'
    str[strcspn(str, "\n")] = '\0';

    printf("Reversed string: ");
    stringReverse(str);
    printf("\n");

    system("pause");
    return 0;
}

void stringReverse(const char str[])
{
    // 終止條件：遇到字串結尾符號 '\0'
    if (str[0] == '\0')
    {
        return;
    }

    // 先遞迴處理下一個字元，回溯時再印出目前字元
    stringReverse(&str[1]);
    printf("%c", str[0]);
}