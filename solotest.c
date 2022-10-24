#include <stdio.h>

int main(void)
{

    int num1, num2; 
    char c;

    printf("수식을 입력하세요 : ");
    scanf("%d%c%d", &num1, &c, &num2);

    switch (c)
    {
    case '+':
        printf("%d %c %d = %d\n", num1, c, num2, num1 + num2);
        break;

    case '-':
        printf("%d %c %d = %d\n", num1, c, num2, num1 - num2);
        break;

    case '*':
        printf("%d %c %d = %d\n", num1, c, num2, num1 * num2);
        break;

    case '/':
        printf("%d %c %d = %lf\n", num1, c, num2, (double)num1 / num2);
        break;

    case '%':
        printf("%d %c %d = %d98\n", num1, c, num2, num1 % num2);
        break;

    default:
        printf("지원되지 않는 연산자입니다.\n");
        break;
    }

    return 0;
}