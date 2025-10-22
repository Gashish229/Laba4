#include<stdio.h>
int main(void)
{
  float cm, inch;
  int feet;
  printf("Введите высоту в сантиметрах: ");
  scanf("%f", &cm);
  while (cm > 0)
    {
      inch = cm / 2.54;
      feet = inch / 12;
      inch = inch - feet * 12;
      printf("%.1f см = %d футов, %.1f дюймов\n", cm, feet, inch);
      printf("Введите высоту в сантиметрах: ");
      scanf("%f", &cm);
    }
  printf("Раюота завершена");
  return 0;
}
