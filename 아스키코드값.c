#include <stdio.h>

int main(void)
{

    char c;

    printf("대문자를 입력하시오 : ");
    scanf("%c", &c, 1);

    printf("입력된 \'%c\'의 대문자의 소문자는 %c 입니다.\n", c, (c+32));

    return 0;
}