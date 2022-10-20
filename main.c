#include<stdio.h>
int main(void)
{

	int sum;    //총액을 저장하는 변수
	int price;  // 각 항목의 가격을 저장하는 변수
	int days;   // 몇 박인지 저장하는 변수

	sum = 0;

	printf("여행은 몇박인가요? :");
	scanf("%d", &days);

	printf("항공권 가격: ");
	scanf("%d", &price);
	sum = sum + price;

	printf("호텔 1박 가격:");
	scanf(" %d", &price);
	sum = sum + days * price;

	printf("하루에 필요한 용돈:");
	scanf("%d", &price);
	sum = sum + days * price;

	printf("===============================\n");
	printf(" 총 여행 비용 : %d \n", sum);
	printf("===============================\n");
	return 0;


}