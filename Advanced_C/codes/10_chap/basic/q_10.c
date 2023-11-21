#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>

int main() {
  int num;
  char str[100];
  char res[100] = {0};

  scanf("%d", &num);

  for (int i = 0; i <= num; i++) {
    gets(str);

    if (strlen(res) == 0)
      strcpy(res, str);
    if (strlen(res) > strlen(str)) {
      strcpy(res, str);
    }
  }
  printf("%s", res);
}