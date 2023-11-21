#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int compare(const void *a, const void *b) {
  if (*(int *)a > *(int *)b)
    return 1;
  else if ((*(int *)a < *(int *)b))
    return -1;
  else
    return 0;
}

int main() {
  int num[3] = {0};
  int *p;
  int i = 0;

  p = num;
  while (i < 3) {
    scanf("%d", p);
    p++;
    i++;
  }
  i = 0;

  int *q;
  int tmp;

  //버블정렬 외우기
  for (p = num; p < num + 3; p++) { // 마지막 요소 전까지 반복
    for (q = p + 1; q < num + 3;
         q++) { // 현재 요소의 다음 요소부터 마지막 요소까지 반복
      if (*p > *q) { // 현재 요소가 다음 요소보다 크면 교환
        tmp = *p;
        *p = *q;
        *q = tmp;
      }
    }
  }

  p = num;
  printf("%d", *(p + 1));
}