/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    printf("동전 던지기 게임을 시작합니다:\n");
    srand(time(NULL));

    int coin = rand() % 2;
    if (coin == 0)
        printf("앞면입니다\n");
    else
        printf("뒷면입니다.\n");

    return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

    srand(time(NULL));
    int num = rand();

    if(num % 2 == 0)
    printf("생성된 수 %d는 짝수입니다.\n",num);

    else
    printf("생성된 수 %d는 홀수입니다.\n",num);

    return 0;
}