#include <stdio.h>
void square(double n);
int main(void) {
    double num;
    printf("Введите число: ");
    scanf("%lf", &num);
    square(num);
    return 0;
}
void square(double n) {
    double square = n * n;
    printf("Квадрат этого числа = %.1f\n", square);
}
