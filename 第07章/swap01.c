/* swap01.c （意図した動作をしないプログラム） */

#include <stdio.h>

void swap(int, int);

int main() {
  int a, b;

  a = 10;
  b = 20;

  swap(a, b);

  printf("a = %d, b = %d\n", a, b);

  return 0;
}

void swap(int a, int b) {
  int c;

  c = b;
  b = a;
  a = c;

  return;
}

