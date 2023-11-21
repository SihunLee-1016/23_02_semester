#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int *MAX(int *arr);
int *MIN(int *arr);
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
    if (*p == 0)
      return 0;

    max = MAX(p);
    min = MIN(p);

    if (min < max) {
      min++;
      while (min != max) {
        printf("%d ", *min);
        min++;
      }
    } else if (min > max) {
      max++;
      while (max != min) {
        printf("%d ", *max);
        max++;
      }
    } else
      printf("none");

    printf("\n");
  }
}

int *MAX(int *arr) {
  int max = 0;
  int *p;

  while (*arr != 0) {
    if (*arr > max) {
      max = *arr;
      p = arr;
    }
    arr++;
  }
  return (p);
}

int *MIN(int *arr) {
  int min = *arr;
  int *p;

  while (*arr != 0) {
    if (*arr <= min) {
      min = *arr;
      p = arr;
    }
    arr++;
  }
  return (p);
}
