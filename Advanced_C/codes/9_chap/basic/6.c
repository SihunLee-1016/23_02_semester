#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
  char c[10];
  char *p, *q;

  p = c;
  int i = 0;
  while (i < 10) {
    scanf("%c", p);
    p++;
    i++;
  }

  for (p = c; p < c + 10; p++) {
    for (q = p + 1; q < c + 10; q++) {
    }
  }
}