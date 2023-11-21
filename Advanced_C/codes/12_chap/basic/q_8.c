#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int N, min = 101, len;
  char *p = NULL;

  scanf("%d", &N);
  getchar();

  char **str = (char **)malloc(N * sizeof(char *));
  for (int i = 0; i < N; i++)
    str[i] = (char *)malloc(100 * sizeof(char));

  for (int i = 0; i < N; i++)
    gets(str[i]);

  for (int i = 0; i < N; i++) {
    len = strlen(str[i]);
    if (min > len) {
      min = len;
      p = str[i];
    }
  }

  printf("%s\n", p);

  for (int i = 0; i < N; i++)
    free(str[i]);
  free(str);

  return 0;
}