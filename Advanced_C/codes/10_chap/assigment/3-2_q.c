#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

int main() {
  char str1[100];
  char str2[100];

  char res1[100][100];
  char res2[100][100];

  char result[250];
  int cnt1 = 0, cnt2 = 0, j = 0, k = 0;

  gets(str1);
  gets(str2);

  for (int i = 0; i < (int)strlen(str1); i++) {
    if (str1[i] != ' ') {
      res1[cnt1][k] = str1[i];
      k++;
    } else {
      res1[cnt1][k] = '\0';
      cnt1 += 1;
      k = 0;
    }
  }

  k = 0;

  for (int i = 0; i < (int)strlen(str2); i++) {
    if (str2[i] != ' ') {
      res2[cnt2][k] = str2[i];
      k++;
    } else {
      res2[cnt2][k] = '\0';
      cnt2 += 1;
      k = 0;
    }
  }

  k = 0;
  int dup;
  int b_cnt = 0;
  char c_dup[100];

  for (j = 0; j < cnt1; j++) {
    dup = 0;
    strcpy(c_dup, res1[j]);
    for (k = j + 1; k <= cnt1; k++) {
      if (strcmp(res1[j], res1[k]) == 0) {
        bzero(res1[k], strlen(res1[k]));
        strcpy(res1[k], res2[b_cnt]);
        b_cnt++;
      }
    }
    bzero(c_dup, strlen(c_dup));
  }

  for (int i = 0; i <= j; i++) {
    strcat(result, res1[i]);
    if (i != j)
      strcat(result, " ");
  }
  printf("%s", result);
}
// red orange red yellow green red blue purple yellow
// white black gray pink brown blush crimson garnet vermilion indigo