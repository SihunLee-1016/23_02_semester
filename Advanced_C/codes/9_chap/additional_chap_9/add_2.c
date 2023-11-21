#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
  int n, num, i, idx = 0, tmp;
  int arr[100] = {0};
  int cnt = 0;
  int max_cnt = 0;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d", &num);

    if (num > 0) {
      arr[idx] = num;
      idx += 1;
    }
  }

  // 홀/짝에 따라 오름/내름차순으로 정렬하는데
  // 내림차순 -> 큰게앞으로
  // 정렬된 배열에서, 홀수가 연속해서나오는 횟수를 세어, 최대 횟수를 출력한다.

  if (idx % 2 == 0) { // 짝수. 내림차순
    for (int j = 0; j < idx - 1; j++) {
      for (int k = 0; k < idx - 1; k++) {
        if (arr[k] < arr[k + 1]) {
          tmp = arr[k + 1];
          arr[k + 1] = arr[k];
          arr[k] = tmp;
        }
      }
    }
  } else {
    for (int j = 0; j < idx - 1; j++) {
      for (int k = 0; k < idx - 1; k++) {
        if (arr[k] > arr[k + 1]) {
          tmp = arr[k + 1];
          arr[k + 1] = arr[k];
          arr[k] = tmp;
        }
      }
    }
  }

  for (int j = 0; j < idx; j++) {
    // printf("cnt = %d\n", cnt);
    if (arr[j] % 2 == 0)
      cnt = 0;
    else
      cnt = cnt + 1;
    if (max_cnt < cnt)
      max_cnt = cnt;
  }

  printf("%d\n", idx);
  for (int j = 0; j < idx; j++)
    printf("%d ", arr[j]);

  printf("\n%d", max_cnt);
}