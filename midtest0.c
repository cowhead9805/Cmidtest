//여행 비용 계산

#include <stdio.h>

int main(void)
{

    int days, price, hotel, money;

    int total;

    printf("여행은 몇박인가요? : ");
    scanf("%d", &days);

    printf("항공권 가격 : ");
    scanf("%d", &price);

    printf("호텔 1박 가격 : ");
    scanf("%d", &hotel);

    printf("하루에 필요한 용돈 : ");
    scanf("%d", &money);

    total = price + (hotel + money) * days;

    printf("========================\n");
    printf("총 여행 비용 : %d \n", total);
    printf("========================\n");

    return 0;
}
