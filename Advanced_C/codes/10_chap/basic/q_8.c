#include <stdio.h>
#include <string.h>

int main() {
  char str1[50], str2[50];

  char res[100];

  scanf("%s", str1);
  scanf("%s", str2);

  if (strcmp(str1, str2) > 0) {

    printf("%s", strcat(str1, str2));
  } else if (strcmp(str1, str2) < 0) {
    printf("%s", strcat(str2, str1));
  }
  return 0;
}