//계산하여 정수만 나타내기
/*#include<stdio.h>

int main(void)
{

    double x, y;

    printf("2개의 실수를 입력하시오: ");
    scanf("%lf %lf", &x, &y);

    printf("정수부 합산 결과 = %d\n", (int)x+(int)y);

    return 0;

}
*/

/* pow 함수 사용

#include <stdio.h>
#include <math.h>

int main(void)
{

    int x;

    printf("정수를 입력하시오 :");
    scanf("%d", &x);

    printf("수식의 값은 %lf 입니다.\n", (pow(x, 3) - 20.0) / (x - 7.0));

    return 0;
}
*/

/*
세자리 정수 받고 각 자리수 추출
#include <stdio.h>

int main(void)
{

    int x;

    printf("세자리 정수를 입력하시오 : ");
    scanf("%d", &x);

    printf("백의 자리 : %d\n", x / 100);
    printf("십의 자리 : %d\n", (x % 100) / 10);
    printf("일의 자리 : %d\n", x % 10);

    return 0;
}

*/

/*
삼항연산자로 정수 3개받고 최댓값 최솟값 출력
#include <stdio.h>

int main(void)
{

    int x, y, z;

    int max, min;

    printf("정수 세 개를 입력하시오 : ");
    scanf("%d%d%d", &x, &y, &z);

    max = (x>y)? x : y ;
    max = (z>max)? z : max ; 

    printf("가장 큰 수는 %d 입니다.", max);

    min = (x>y) ? y : x;
    min = (min>z) ? z : min;
 
    printf("가장 작은 수는 %d 입니다.\n", min);

    return 0;
}

*/
/*
시간받고 오전 오후 출력
#include<stdio.h>

int main(void){

    int time1, time2;

    printf("시간을 입력하시오<24시간제> : ");
    scanf("%d",&time1);

    if(time1<13){

        printf("입력한 시간은 %d 오전 %d시 입니다.",time1,time1);
    }

    else{

        time2 = time1 - 12;

        printf("입력한 시각은 %d 오후 %d시 입니다.",time1, time2);
    }

    return 0;

}
*/



