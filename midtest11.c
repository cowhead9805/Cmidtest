/*
#include<stdio.h>


int main(void){
    int a,b,c,largest;

    printf("3개의 정수를 입력하시오: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    largest =a;

    else if(b>a&&b>c)
    largest =b;

    else
    largest =c;

    printf("가장 큰 정수는 %d이다\n",largest);

    return 0;
}
*/

#include <stdio.h>

int main(void)
{

    int score;

    char grade;

    printf("성적을 입력하시오: ");
    scanf("%d", &score);

    switch (score / 10)
    {

    case 10:
    case 9:
        grade = 'A';
        printf("학점 %c \n", grade);
        break;

    case 8:
        grade = 'B';
        printf("학점 %c \n", grade);
        break;
    case 7:
        grade = 'C';
        printf("학점 %c \n", grade);
        break;
    case 6:
        grade = 'D';
        printf("학점 %c \n", grade);
        break;
    default:
        grade = 'F';
        printf("학점 %c \n", grade);
        break;
    }
}
