#include<stdio.h>

int main(void){

    int money, price, less, bills, coin100s, coin10s;

    printf("투입한 금액을 입력하시오 : ");
    scanf("%d", &money);

    printf("물건의 가격을 입력하시오 : ");
    scanf("%d", &price);

    
    less = money - price;
    printf("거스름돈은 %d입니다.\n",less);

    bills = less / 1000;
    printf("1000원 지폐의 개수 : %d\n", bills);

    less = less % 1000;
    coin100s = less / 100;
    
    printf("100원 동전의 개수 : %d\n", coin100s);
    
    less = less % 100;
    coin10s = less / 10;
    printf("10원 동전의 개수 : %d\n", coin10s);

    return 0;
}