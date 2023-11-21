#include <stdio.h>
int main() {

  int num, value, cnt;
  int len = 0;

  char str[5];

  scanf("%d", &num);

  if (num >= 10000)
    return (0);

  while (num > 0) {
    value = num % 10;
    str[len] = value + 48;

    num = num / 10;
    len++;
  }

  str[len] = '\0';
  cnt = len;

  for (int i = 0; i < len; i++) {
    if (str[len - i - 1] == '1')
      printf("one");
    else if (str[len - i - 1] == '2')
      printf("two");
    else if (str[len - i - 1] == '3')
      printf("three");
    else if (str[len - i - 1] == '4')
      printf("four");
    else if (str[len - i - 1] == '5')
      printf("five");
    else if (str[len - i - 1] == '6')
      printf("six");
    else if (str[len - i - 1] == '7')
      printf("seven");
    else if (str[len - i - 1] == '8')
      printf("eight");

    else if (str[len - i - 1] == '9')
      printf("nine");

    if (str[len - i - 1] != '0') {
      printf(" ");
      if (cnt == 4) {
        printf("THO ");
      } else if (cnt == 3) {
        printf("HUN ");
      } else if (cnt == 2) {
        printf("TEN ");
      }
    }
    cnt--;
  }
}