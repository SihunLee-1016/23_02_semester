#include <stdio.h>

int input(int *p) {
  int count = 0;
  while (count < 100) {
    scanf("%d", p + count);
    if (*(p + count) == -1)
      break;
    count++;
  }
  return count;
}

int *sel_next(int *p) {
  int sum = 0;
  while (*p != -1 && sum + *p <= 10) {
    sum += *p;
    p++;
  }
  return p;
}

int number(int *start, int *end) {
  int num = 0;
  for (; start < end; start++) {
    num = num * 10 + (*start);
  }
  return num;
}

int main() {

  int arr[100];
  int len = input(arr);

  for (int *start = arr; start < arr + len;) {
    int *next_start = sel_next(start);
    printf("%d*\n", number(start, next_start));
    start = next_start;
  }

  return 0;
}
