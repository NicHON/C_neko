/* strinput03.c */

#include <stdio.h>
#include <string.h>

int main() {
  char str[64];

  while (1) {
    printf("文字列を入力してください---");
    gets(str);
    if (strcmp(str, "") == 0) break;
    printf("入力した文字は「%s」です\n", str);
  }

  return 0;
}
