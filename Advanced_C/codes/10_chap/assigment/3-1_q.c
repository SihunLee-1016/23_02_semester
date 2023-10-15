#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// pivot과 val의 길이가 같지 않을 수 있다 -> ori에 치환해서 넣을때 문제가
// 될수있다.

int main() {
  char ori[100];
  char pivot[10];
  char val[10];
  char res[100][100];

  char result[250];

  int i = 0, j = 0, k = 0, len, len2;

  gets(ori);

  scanf("%s", pivot);
  scanf("%s", val);

  len = strlen(pivot);
  len2 = strlen(val);

  while (ori[i]) {
    if (strncmp(&ori[i], pivot, strlen(pivot)) == 0) {
      k = 0;
      while (val[k]) {
        result[j] = val[k];
        j++;
        k++;
      }
      i = i + len;
      continue;
    } else {
      result[j] = ori[i];
    }
    i++;
    j++;
  }
  result[j] = '\0';
  printf("%s", result);
}
