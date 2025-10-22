#include <stdio.h>

int main(void) {
    int days;
    int sum = 0;
    int count = 0;
    
    printf("Введите количество дней для получения долларов в геометрической прогрессии: ");
    scanf("%d", &days);

    while (++count <= days) {
        int quadro = count + count;
        sum = sum + quadro;
    }
    
    printf("sum = %d$ \n", sum);

    return 0;
}
