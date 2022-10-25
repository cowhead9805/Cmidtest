#include<stdio.h>
#define YD 0.9144

int main(void){

    double yard, meter;

    printf("야드를 입력하세요");
    scanf("%lf", &yard);

    meter = YD * yard;
    printf("%lf 야드는 %lf 미터입니다.\n", yard, meter);

    return 0;
}