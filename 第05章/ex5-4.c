#include <stdio.h>

int main() {
  double height = 0, weight = 0;
  double BMI = 0, PER_weight = 0;

  printf("身長(cm)：--- ");
  scanf("%lf", &height);
  printf("体重(kg)：--- ");
  scanf("%lf", &weight);

  BMI = weight / (height / 100 * height / 100);
  PER_weight = 22.0 * (height / 100 * height / 100);

  printf("BMI = %5.1f\n", BMI);
  printf("理想のBMIとなる体重は%5.1fです。\n", PER_weight);

  return 0;
}

