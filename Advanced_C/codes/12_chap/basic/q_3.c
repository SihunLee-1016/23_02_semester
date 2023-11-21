#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int N;
  int c1 = 0;
  int c2 = 0;
  char a, b;

  scanf("%d", &N);
  getchar();

  char *str = (char *)malloc(N * sizeof(char));

  gets(str);
  scanf("%c %c", &a, &b);

  for (int i = 0; i < N; i++) {
    if (str[i] == a)
      c1++;
    if (str[i] == b)
      c2++;
  }

  printf("%d %d\n", c1, c2);

  free(str);

  return 0;
}