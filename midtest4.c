#include<stdio.h>

int main(void){

    double light_speed = 300000;
    double distance = 146000000;

    double res;
   

    res = distance / light_speed; 
    res = res / 60;

    printf("%lf\n",res);
    

    return 0;
}