#include <stdio.h>

int main(void)
{

    int num1, num2;
    int sum, minu, mul;
    double div;

    printf("첫 번째 숫자를 입력하시오 : ");
    scanf("%d", &num1);

    printf("두 번째 숫자를 입력하시오 : ");
    scanf("%d", &num2);

    sum = num1 + num2;
    minu = num1 - num2;
    mul = num1 * num2;
    div = num1 / (double)num2;

    printf("두수의 합 = %d\n", sum);

    printf("두수의 차 = %d\n", minu);

    printf("두수의 곱 = %d\n", mul);

    printf("두수의 몫 = %lf\n", div);

    return 0;
}

/*
더 편한 방식으로 생각할 것
#include <stdio.h>

int main(void)
{
	int x;		// 첫 번째 정수를 저장할 변수
	int y;		// 두 번째 정수를 저장할 변수
	int result;		// 연산의 결과를 저장할 변수

	printf("첫 번째 숫자를 입력하시오:");// 입력 안내 메시지 출력
	scanf_s("%d", &x);		// 하나의 정수를 받아서 x에 저장

	printf("두 번째 숫자를 입력하시오:");// 입력 안내 메시지 출력
	scanf_s("%d", &y);			// 하나의 정수를 받아서 y에 저장
	result = x + y;			// 덧셈
	printf("두수의 합= %d \n", result);
	result = x - y;			// 뺄셈
	printf("두수의 차= %d \n", result);
	result = x * y;			// 곱셈
	printf("두수의 곱= %d \n", result);
	result = x / y;			// 나눗셈
	printf("두수의 몫= %d \n", result);

	return 0;
}*/