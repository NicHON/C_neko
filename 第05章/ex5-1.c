#include <stdio.h>

int main() {
  int Answer = 0;
  for (int i = 1; i <= 100; ++i) {
    Answer += i;
  }

  printf(" ANSWER = %d\n", Answer);

  return 0;
}
