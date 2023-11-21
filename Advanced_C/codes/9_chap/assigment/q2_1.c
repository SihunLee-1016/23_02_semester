#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int isAlready(int *d_arr, int value, int n) {

  int *p;

  p = d_arr;
  for (; p < d_arr + n; p++) {
    if (*p == value)
      return (0);
  }
  return (1);
}

int main() {
  int n, *p, *q, *d_p;
  int arr[21];
  int d_arr[21] = {0};
  int cnt;

  scanf("%d", &n);
  p = arr;
  for (int i = 0; i < n; i++) {
    scanf("%d", p);
    p++;
  }

  if (n < 5) {
    printf("-1\n");
    return (0);
  }

  int prev_val = 0;
  d_p = d_arr;
  for (p = arr; p < arr + n; p++) {

    cnt = 0;
    for (q = arr; q < arr + n; q++) {
      if (*p == *q)
        cnt++;
    }

    if (cnt != 1 && prev_val != *p && isAlready(d_arr, *p, n)) {
      *d_p = *p;
      d_p++;
      printf("%d %d\n", *p, cnt);
    }
  }
}
