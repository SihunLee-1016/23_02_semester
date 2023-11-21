#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Rank == 자신보다 높은 등수가 몇명있는지를 count하면됨
int main() {

  int *p, *sort, *q, *p2;

  int rank[5], num[5], arr[5];
  int i = 0;

  p = num;
  p2 = arr;
  while (i < 5) {
    scanf("%d", p);
    *p2 = *p;
    p++;
    p2++;
    i++;
  }

  // num이랑 arr에 같은 값이 저장되어있음.
  //  정렬하는
  int tmp;
  for (sort = num; sort < num + 5; sort++) { // 마지막 요소 전까지 반복
    for (q = sort + 1; q < num + 5;
         q++) { // 현재 요소의 다음 요소부터 마지막 요소까지 반복
      if (*sort < *q) { // 현재 요소가 다음 요소보다 크면 교환
        tmp = *sort;
        *sort = *q;
        *q = tmp;
      }
    }
  }

  i = 0;

  while (i < 5) {
    printf("%d ", num[i]);
    i++;
  }
}