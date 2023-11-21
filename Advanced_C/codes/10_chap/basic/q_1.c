#include <stdio.h>

int main() {
  char *str;
  int i = 0;

  scanf("%s", str);
  while (str[i]) {
    if (str[i] >= 'a' && str[i] <= 'z')
      printf("%c", str[i]);
    i++;
  }
}