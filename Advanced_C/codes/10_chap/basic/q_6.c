#include <stdio.h>

int main() {
  char str1[40];
  char str2[20];
  int pos;
  int len1 = 0;
  int len2 = 0;
  int sort;

  scanf("%s", str1);
  scanf("%s", str2);
  scanf("%d", &pos);
  scanf("%d", &sort);

  while (str1[len1] != '\0')
    len1++;

  while (str2[len2] != '\0')
    len2++;

  for (int i = len1; i >= pos; i--) {
    str1[i + len2] = str1[i];
  }

  if (sort == 0) {
    for (int i = 0; str2[i] != '\0'; i++)
      str1[pos + i] = str2[i];
  } else {
    for (int i = 0; i < len2; i++)
      str1[pos + i] = str2[len2 - i - 1];
  }

  printf("%s", str1);

  return 0;
}
