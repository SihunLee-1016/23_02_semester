#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);

  char *str = malloc(sizeof(char) * (n + 1));

  scanf("%s", str);
  int cnt = 0;

  for (int i = 0; i < n; i++) {
    if (strncmp(&str[i], "cat", 3) == 0) {
      cnt++;
    }
  }
  printf("%d", cnt);
}