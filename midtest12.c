#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

    srand(time(NULL));

    int x = rand();

    if(x % 2 == 0)
    printf("랜덤 생성된 %d는 짝수입니다.",x);

    else
    printf("랜덤 생성된 %d는 홀수입니다.",x);

    return 0;
}