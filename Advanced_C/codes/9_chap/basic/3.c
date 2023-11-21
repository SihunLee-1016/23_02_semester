#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
  int n;

  scanf("%d", &n);
  if (n > 50)
    return 0;

  int num[n];
  int *p;
  int *start;
  int cnt = 0;
  p = num;
  start = num;

  while (n--) {
    scanf("%d", p);
    p++;
  }

  while (start != p) {
    if (*start == 0)
      break;
    else {
      cnt++;
      start++;
    }
  }
  printf("%d", cnt);
}