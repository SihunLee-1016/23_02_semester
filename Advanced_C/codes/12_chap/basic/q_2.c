#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;

  scanf("%d", &n);

  float *arr = malloc(sizeof(float) * n);
  float max;

  for (int i = 0; i < n; i++) {
    scanf("%f", &arr[i]);
  }

  for (int i = 0; i < n; i++) {
    if (i == 0)
      max = arr[i];
    if (arr[i] >= max)
      max = arr[i];
  }
  printf("%.2f", max);
}