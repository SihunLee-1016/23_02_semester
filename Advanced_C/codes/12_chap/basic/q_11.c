#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int size = 5, n, cnt = 0;
  int *arr = (int *)malloc(size * sizeof(int)), *arr2;

  while (1) {
    scanf("%d", &n);
    if (cnt >= size) {
      if (size >= 20)
        break;
      size += 3;
      arr2 = (int *)malloc(size * sizeof(int));
      for (int i = 0; i < cnt; i++)
        arr2[i] = arr[i];
      free(arr);
      arr = arr2;
    }
    arr[cnt] = n;
    cnt++;
    if (n == -1)
      break;
  }

  for (int i = 0; i < cnt; i++)
    printf("%d ", arr[i]);
  printf("\n");
  free(arr);

  return 0;
}