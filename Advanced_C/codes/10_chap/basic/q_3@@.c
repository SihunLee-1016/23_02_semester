#include <stdio.h>

int main() {
  char str[100];

  scanf("%s", str);
  int len = 0;

  while (str[len])
    len++;

  for (int i = 0; i < len; i++) {
    printf("%s\n", str);
    char tmp = str[0];
    for (int j = 0; j < len - 1; j++) {
      str[j] = str[j + 1];
    }
    str[len - 1] = tmp;
  }
  return (0);
}