#include <stdio.h>

int add (int a, int b) {
  return a + b;
}

int main(void) {
  printf("Hello, World!\n");

  int a = 2, b = 3;
  printf("%d+%d=%d\n", a, b, add(a, b));

  return 0;
}

