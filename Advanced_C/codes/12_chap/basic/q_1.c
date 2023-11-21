#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int total;

  scanf("%d", &n);

  int *arr = malloc(sizeof(int) * n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n; i++) {
    total += arr[i];
  }
  printf("%d", total);
}