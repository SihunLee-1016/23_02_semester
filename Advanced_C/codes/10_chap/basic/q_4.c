#include <stdio.h>

int main() {
  int len1 = 0;
  int len2 = 0;

  char str1[100];
  char str2[100];

  scanf("%s", str1);
  scanf("%s", str2);

  while (str1[len1])
    len1++;

  while (str2[len2])
    len2++;

  printf("%d ", len1);
  if (len1 != len2) {
    printf("0");
    return (0);
  }

  int i = 0;
  while (str1[i] && str2[i]) {
    if (str1[i] == str2[i]) {
      i++;
      continue;
    } else {
      printf("0");
      return (0);
    }
  }
  printf("1");
}