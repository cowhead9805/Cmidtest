#include<stdio.h>

int main(void){

    int time1, time2;

    

    printf("시간을 입력하시오<24시간제> : ");
    scanf("%d", &time1);

    if(time1 < 13){
         printf("입력한 %d 시각은 오전 %d시 입니다.", time1,time1);
    }
    else{

        time2 = time1 - 12;
        printf("입력한 %d 시각은 오후 %d시 입니다.", time1,time2);
    }

    return 0;



}