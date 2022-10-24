// 변수 선언하고 달러를 원화로 계산하기
#include <stdio.h>
#define EXCHANGE_RATE  1120

int main(void)
{

    int won, usd;

    printf("달러화 금액을 입력하시오: ");
    scanf("%d", &usd);

    won = EXCHANGE_RATE * usd;

    printf("달러화 %d 달러는 %d원입니다.", usd, won);

    return 0;
}