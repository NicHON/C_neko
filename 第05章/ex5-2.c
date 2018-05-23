#include <stdio.h>

int main() {
  int Answer = 0;
  int i = 1;
  while (i <= 100) {
    Answer += i;
    ++i;
  }

  printf(" ANSWER = %d\n", Answer);

  return 0;
}
