#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
  char str1[100];
  char str2[100];

  gets(str1);
  scanf("%s", str2);

  int len1 = (int)strlen(str1);
  int len2 = (int)strlen(str2);
  int j, cnt = 0;

  for (int i = 0; i < len1; i++) {
    // 첫번째 문자열의문자가 두번째 문자의 첫번째와 동일하다면.
    if (str1[i] == str2[0]) {
      for (j = 1; j < len2 && i + j < len1; j++) {
        if (str1[i + j] != str2[j]) {
          break;
        }
      }
      if (j == len2) {
        cnt += 1;
        i += j - 1;
      }
    }
  }
  printf("%d", cnt);
}