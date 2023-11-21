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

  // for (int i = 0; i < N; i++) {
  //   len = strlen(str[i]);
  //   if (min > len) {
  //     min = len;
  //     p = str[i];
  //   }
  // }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (strlen(str[i]) > strlen(str[j])) {
        p = str[i];
        str[i] = str[j];
        str[j] = p;
      }
    }
  }

  for (int i = 0; i < N; i++)
    printf("%s\n", str[i]);

  for (int i = 0; i < N; i++)
    free(str[i]);
  free(str);

  return 0;
}