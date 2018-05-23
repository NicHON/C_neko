#include <stdio.h>

int main() {
  int point = 0;
  int count = 0, min = 100, max = 0;
  int sum = 0;
  double ave = 0;

  while (1) {
    printf("点数（-1で終了） --- ");
    scanf("%d", &point);
    if (point == -1) break;
    if (point <= 100 && point >= 0) {
      sum += point;
      if (point < min) min = point;
      if (point > max) max = point;
      count++;
    } else
      printf("点数は0から100の間です。\n");
  }

  if (count == 0)
    return 0;
  else {
    ave = (double)sum / (double)count;
    printf(
        "テストの最低点は%d, 最高点は%d, 受験者数は%d, "
        "平均点は%5.1fです。\n",
        min, max, count, ave);
    return 0;
  }
}

