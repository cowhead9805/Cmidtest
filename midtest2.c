#include<stdio.h>

int main(void){

    int i1,i2;

    printf("첫번째 수 = ");
    scanf("%d", &i1);

    printf("두번째 수= ");
    scanf("%d", &i2);

    printf("두 수의 차 = %d\n",(i1>i2)?i1-i2:i2-i1);

    return 0;
}