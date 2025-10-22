#include <stdio.h>

int main(void) {
    int second;
    int first;
    
    printf("Эта программа производит деление по модулю!\n");
    printf("Введите значение второго операнда: ");
    scanf("%d", &second);
    printf("Введите значение первого операнда: ");
    scanf("%d", &first);

    while (first > 0) {
        int division = first % second;
        printf("%d %% %d равно %d\n", first, second, division);
        printf("Введите значение первого операнда(для выхода введите число <= 0): ");
        scanf("%d", &first);
    }
    
    printf("Готово!\n");

    return 0;
}
