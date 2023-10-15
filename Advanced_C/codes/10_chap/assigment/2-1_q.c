#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
  char str[200];
  char res[20][200] = {0};
  int j = 0;
  int k = 0;

  gets(str);

  for (int i = 0; i < (int)strlen(str); i++) {
    if (str[i] != ' ') {
      res[j][k] = str[i];
      k++;
    } else {
      res[j][k] = '\0';
      j += 1;
      k = 0;
    }
  }

  int i = 0;

  for (int i = 0; i <= j; i++) {
    printf("%s\n", res[i]);
  }

  char tmp[200];
  for (int i = 0; i < j; i++) {
    for (int p = 0; p < j; p++) {
      if (strcmp(res[p], res[p + 1]) > 0) {
        strcpy(tmp, res[p]);

        bzero(res[p], strlen(res[p]));
        strcpy(res[p], res[p + 1]);

        bzero(res[p + 1], strlen(res[p + 1]));
        strcpy(res[p + 1], tmp);

        bzero(tmp, strlen(tmp));
      }
    }
  }
  for (int i = 0; i <= j; i++) {
    printf("%s ", res[i]);
  }
  // 9 3 2 1

  // 3 9 2 1
  // 3 2 9 1
  // 3 2 1 9

  // 2 3 1 9
  // 2 1 3 9
  // 2 1 3 9

  // 1 2 3 9
}