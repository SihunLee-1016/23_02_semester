#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int tmp;
  scanf("%d", &n);

  int *arr = malloc(sizeof(int) * n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      tmp = arr[i + 1];
      arr[i + 1] = arr[i];
      arr[i] = tmp;
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
  }
}