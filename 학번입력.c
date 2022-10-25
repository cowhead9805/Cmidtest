#include <stdio.h>

int main(void)
{
	int sn;

	printf("본인의 학번을 아래칸에 입력하세요.\n");
	printf("학번:_________\b\b\b\b\b\b\b\b\b");
	scanf_s("%d", &sn);
	printf("나의 학번은 \"%d\" 입니다.\n",sn);

	int n1, n2, n3;

		printf("두개의 숫자를 입력하세요 :");
		scanf_s("%d %d", &n1,&n2);


		printf("첫번째 입력 숫자 %d\n", n1);
		printf("두번째 입력 숫자 %d\n", n2);
		printf("==========================\n");
		printf("저장된 변수값 서로 교환하기\n");
		printf("===========================\n");

		n3 = n1;
		n1 = n2;
		n2 = n3;

		printf("첫번째 변수 숫자 : %d", n1);
		printf("두번째 변수 숫자 : %d", n2);


	return 0;
}


