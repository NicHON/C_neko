/* nyujoryo03.c */

#include <stdio.h>

int main() {
  int age;
  int is_seito; /* 生徒なら1,そうでないなら0*/

  printf(
      "このたびは「猫でもランド」に\n"
      "ご来園ありがとうございます。\n");
  printf("-----------------------------\n");
  printf("年齢を入力してください---");
  scanf("%d", &age);
  printf("「猫でも学園」の\n生徒さんですか（YES:1, NO:0)---");
  scanf("%d", &is_seito);

  if (age < 6) {
    printf("入場料は無料です。\n");
  } else if (is_seito == 1) {
    printf("入場料は無料です。\n");
  } else {
    printf("入場料1,000円を頂きます。\n");
  }
  printf("----------------------------------\n");
  printf("では、ごゆっくりお楽しみください\n");

  return 0;
}
