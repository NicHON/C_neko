#include <stdio.h>

double area(double);

int main() {
  double r = 0;

  printf("半径を入力してください：R = ");
  scanf("%lf", &r);
  printf("円の面積は%lfです。\n", area(r));
}

double area(double r) {
  double area = r * r * 3.14;
  return area;
}
