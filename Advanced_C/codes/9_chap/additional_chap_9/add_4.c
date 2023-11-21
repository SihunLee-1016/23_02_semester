#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int input(int *p) {
  int num;
  int cnt = 0;
  int *q;
  q = p;

  while (cnt < 100) {
    scanf("%d", &num);
    if (num == -1)
      break;
    *q = num;
    q++;
    cnt++;
  }
  return (cnt);
}

int *sel_next(int *p, int N, int M) {
  int *q;
  int pre_val;

  q = p + M;
  pre_val = *q;
  q++;
  for (; q < p + N; q++) {
    if (pre_val < *q)
      pre_val = *q;
    else
      break;
  }
  return (--q);
}

int number(int *p, int *q) {
  int *r;
  int num = 0;

  r = p;
  while (r != q + 1) {
    num = num * 10 + *r;
    r++;
  }
  return (num);
}

int main() {
  int m, num, arr[100];
  int *end;
  int arr_cnt = input(arr);

  scanf("%d", &m);
  end = sel_next(arr, arr_cnt, m);

  num = number(arr + m, end);
  printf("%d", num);
}