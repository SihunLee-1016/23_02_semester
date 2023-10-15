#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
  char str[200];
  char add[200];

  char res[20][200] = {0};
  int j = 0;
  int k = 0;
  int status = 0;
  gets(str);
  gets(add);

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

  for (int i = 0; i <= j; i++) {
    if (strcmp(res[i], add) == 0)
      status = 1;
  }

  j++;
  if (status == 0) {
    strcpy(res[j], add);
    j++;
  }
  int i = 0;

  for (int i = 0; i <= j; i++) {
    printf("%s", res[i]);
    if (i != j)
      printf("\n");
  }

  char tmp[200] = {0};
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

  bzero(tmp, strlen(tmp));

  for (int i = 0; i <= j; i++) {
    strcat(tmp, res[i]);
    strcat(tmp, " ");
  }

  printf("%s", tmp);
  // for (int i = 0; i <= j; i++) {
  //   printf("%s ", res[i]);
  // }
}