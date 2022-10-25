/*온도를 입력받고 영상,영하의 온도 출력하기
#include<stdio.h>

int main(void){

    int temperature;

    printf("온도를 입력하시오 :");
    scanf("%d",&temperature);

    if(temperature > 0)
        printf("영상의 날씨입니다.\n");

        else
        printf("영하의 날씨입니다.\n");

        printf("현재 온도는 %d도 입니다.\n", temperature);

        return 0;
}

*/
/*
윤년 판단
#include<stdio.h>

int main(void){

    int num;

    printf("정수를 입력하시오: ");
    scanf("%d",&num);

    if(num%2==0)
    printf("입력된 정수는 짝수입니다.\n");

    else
    printf("입력된 정수는 홀수입니다.\n");

    return 0;
}
*/

#include <stdio.h>

int main(void)
{

    int year, res;

    printf("연도를 입력하시오:");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)

        printf("%d년은 윤년입니다.\n", year);

    else

        printf("해당년도는 윤년이 아닙니다.\n");

    return 0;
}