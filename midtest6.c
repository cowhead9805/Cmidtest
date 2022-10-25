#include<stdio.h>

int main(void){

    int money, price;
    int max, left;

    printf("현재가지고 있는 돈: ");
    scanf("%d",&money);

    printf("캔디의 가격: ");
    scanf("%d",&price);

    max = money / price ;
    left = money % (max*price);

    printf("최대로 살 수 있는 캔디의 개수 = %d\n",max);

    printf("캔디 구입 후 남은 돈 = %d\n",left);

    return 0;



}