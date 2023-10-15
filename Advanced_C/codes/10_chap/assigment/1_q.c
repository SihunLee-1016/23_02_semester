#include <stdio.h>
#include <string.h>

int main() {
  char str[20];
  int n;
  int alp;
  char c;

  scanf("%s", str);
  scanf("%d", &n);

  for (int i = 0; i < (int)strlen(str); i++) {
    if (str[i] >= 'A' && str[i] <= 'Z')
      printf("%c", str[i] + n);
    else if (str[i] >= 'a' && str[i] <= 'z')
      printf("%c", str[i] - n);
    else if (str[i] > '0' && str[i] <= '9') {
      alp = str[i] - 48;
      if (str[i + 1] >= '0' && str[i + 1] <= '9') {
        alp = alp * 10 + (str[i + 1] - 48);
        i = i + 1;
      }
      c = alp + 64;
      for (int j = 0; j < n; j++) {
        printf("%c", c);
      }
    } else {
      printf(" ");
    }
  }
}