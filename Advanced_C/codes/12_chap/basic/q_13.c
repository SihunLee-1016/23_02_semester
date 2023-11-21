#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int N, D;
  int *arr;

  scanf("%d", &N);

  arr = (int *)malloc(N * sizeof(int));

  for (int i = 0; i < N; i++)
    scanf("%d", &arr[i]);

  scanf("%d", &D);

  N -= D;
  arr = (int *)realloc(arr, N * sizeof(int));

  for (int i = 0; i < N; i++)
    printf("%d", arr[i]);

  free(arr);

  return 0;
}
