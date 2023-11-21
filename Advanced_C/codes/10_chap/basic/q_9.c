#include <stdio.h>
#include <string.h>

int check(char *str) {
  int len = (int)strlen(str);

  for (int i = 0; i < len; i++) {
    if (str[i] != str[len - i - 1])
      return (0);
  }
  return (1);
}

int main() {
  char str[30];

  scanf("%s", str);
  printf("%d %d", (int)strlen(str), check(str));
}