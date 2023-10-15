#include <stdio.h>
#include <string.h>

int main() {
  char str1[20], str2[20];
  int n;
  int alp;
  char c;
  int prev_diff;
  int diff;

  char res1[20], res2[20];
  gets(str1);
  gets(str2);
  // scanf("%d", &n);

  if (strlen(str1) != strlen(str2)) {
    printf("0");
    return 0;
  }

  // for (int i = 0; i < (int)strlen(str1); i++) {
  //   diff = str1[i] - str2[i];
  //   if (i == 0)
  //     prev_diff = diff;
  //   if (prev_diff != diff) {
  //     printf("1")
  //   }
  // }

  for (int i = 0; i < (int)strlen(str1); i++) {
    if (str1[i] >= 'A' && str1[i] <= 'Z')
      res1[i] = str1[i] printf("%c", str1[i] + n);

    else if (str1[i] >= 'a' && str1[i] <= 'z')
      printf("%c", str1[i] - n);

    else if (str1[i] > '0' && str1[i] <= '9') {
      alp = str1[i] - 48;
      if (str1[i + 1] >= '0' && str1[i + 1] <= '9') {
        alp = alp * 10 + (str1[i + 1] - 48);
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