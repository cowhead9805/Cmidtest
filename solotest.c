#include<stdio.h>

int main(void){

    int meter;
    int mile;

    printf("마일을 입력하세요.: ");
    scanf("%d", &mile);

    meter = (mile*1609);

    printf("%d 마일은 %d 미터 입니다.\n",mile,meter);

}