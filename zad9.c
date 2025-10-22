#include <stdio.h>

#define F_PER_C 5.0/9.0
#define F_DEDUCTION 32
#define C_PER_K 273.16

void Temperatures(double n);

int main(void) {
    double f;
    
    printf("Введите значение температуры по Фаренгейту: ");
    
    while (scanf("%lf", &f) == 1) {
        Temperatures(f);
    }
    
    return 0;
}

void Temperatures(double n) {
    double c = F_PER_C * (n - F_DEDUCTION);
    double k = c + C_PER_K;
    
    printf("По Фаренгейту = %.2f\nПо Цельсию = %.2f\nПо Кельвину = %.2f\n", n, c, k);
    printf("Введите значение температуры по Фаренгейту (для выхода введите q): ");
}
