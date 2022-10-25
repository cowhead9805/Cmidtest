#include <stdio.h>

int main(void)
{

    int i1, i2;
    int res1, res2, res3, res5;
    double res4;

    printf("첫번째 숫자 입력 : ");
    scanf("%d", &i1);

    printf("두번째 숫자 입력 : ");
    scanf("%d", &i2);

    res1 = i1 + i2;
    res2 = i1 - i2;
    res3 = i1 * i2;
    res4 = (double)i1 / i2;
    res5 = i1 % i2;

    printf("%d + %d = %d\n", i1, i2, res1);
    printf("%d - %d = %d\n", i1, i2, res2);
    printf("%d * %d = %d\n", i1, i2, res3);
    printf("%d / %d = %lf\n", i1, i2, res4);
    printf("%d %% %d = %d\n", i1, i2, res5);

    return 0;
}