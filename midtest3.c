#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    int num;

    srand(time(NULL));

    num = rand();

    if (num % 2 == 0)
        printf("생성된 %d 난수는 짝수입니다. \n", num);
    else
        printf("생성된 %d 난수는 짝수입니다.\n", num);

    return 0;
}