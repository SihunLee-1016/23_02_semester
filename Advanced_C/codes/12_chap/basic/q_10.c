#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);

  int *arr;

  arr = malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++)
    arr[i] = i;

  int *arr2;
  int cnt = 0;

  arr2 = malloc(sizeof(int) * (n - 1));

  for (int i = 0; i < n; i++) {
    if (i == n / 2) {
      continue;
    }
    arr[cnt] = i;
    cnt++;
  }

  for (int i = 0; i < n - 1; i++) {
    printf("%d ", arr[i]);
  }
}
