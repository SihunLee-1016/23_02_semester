#include <stdio.h>
#include <stdlib.h>

int main() {
  int number;

  char str[9];

  scanf("%d", &number);

  for (int i = 0; number > 0; i++) {
    str[i] = number % 10 + 48;
    number = number / 10;
  }
  printf("%s", str);
}