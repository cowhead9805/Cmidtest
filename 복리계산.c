#include<stdio.h>
#include<math.h>

int main(void){

    int im =24;
    int year = 382;
    double mul =0.06;

    double money = im*pow((1.0+mul),year);

    printf("%d년 후의 원리금 = %lf\n ", year, money);

    return 0;
}