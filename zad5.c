#include <stdio.h>
int main(void) 
{
    int days;
    int count = 0, sum = 0;
    printf("Введите количество дней для получения долларов в арифметической прогрессии: ");
    scanf("%d", &days);
    while (count++ < days)
        sum = sum + count;
    printf("sum = %d$\n", sum);
    return 0;
}
