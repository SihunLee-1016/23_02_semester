#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int *MAX(int *arr) {
  int max = 0;
  int *p;

  while (*arr != 0) {
    // printf("%d ", *arr);
    if (*arr > max) {
      max = *arr;
      p = arr;
    }
    arr++;
  }
  return (p);
}

int *MIN(int *arr) {
  // int min = 0;
  int *p;
  int min = *arr;
  while (*arr != 0) {
    // printf("%d ", *arr);
    if (*arr <= min) {
      min = *arr;
      p = arr;
    }
    arr++;
  }
  return (p);
}

int main() {
  int n, *p;
  int arr[100] = {0};
  int *max, *min;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {

    p = arr;

    while (1) {
      scanf("%d", p);
      if (*p == 0)
        break;
      p++;
    }
    p = arr;
    max = MAX(p);
    min = MIN(p);
    printf("%d %d\n", *max, *min);
  }
}
