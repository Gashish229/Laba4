#include<stdio.h>
int main(void)
{
    int day, nedela, ost_day;
    while(1)
    {
        printf("Введите кол-во дней:\n");
        scanf("%d", &day);
        if (day <= 0)
        {
            printf("Попробуйте еще раз\n");
            break;
        }
        nedela = day / 7;
        ost_day = day % 7;
        printf("%d дней составляют %d недель(-и) и %d дня(-ей)\n", day, nedela, ost_day);
    }
    return 0;
}
