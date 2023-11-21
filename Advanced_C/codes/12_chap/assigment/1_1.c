#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st {
  char *str;
  int cnt1;
  int cnt2;
};

int main() {
  int n;
  struct st *arr;
  struct st tmp;
  scanf("%d", &n);

  arr = malloc(sizeof(struct st) * n);
  if (arr == NULL)
    return 0;
  for (int i = 0; i < n; i++) {
    arr[i].str = malloc(sizeof(char) * 101);
    if (arr[i].str == NULL)
      return 0;
    scanf("%s", arr[i].str);
    arr[i].cnt2 = (int)strlen(arr[i].str);
  }

  int j = 0;
  for (int i = 0; i < n; i++) {
    j = 0;
    while (arr[i].str[j]) {
      if (!(arr[i].str[j] == 'a' || arr[i].str[j] == 'e' ||
            arr[i].str[j] == 'i' || arr[i].str[j] == 'o' ||
            arr[i].str[j] == 'u'))
        arr[i].cnt1++;
      j++;
    }
  }

  // 버블정렬. 내부 반복문에선 j, j+1번째로 찾음.
  for (int i = 0; i < n; i++) {
    for (j = 0; j < n - i - 1; j++) {
      // if (arr[j].cnt1 > arr[j + 1].cnt1)
      if (arr[j].cnt1 < arr[j + 1].cnt1 ||
          (arr[j].cnt1 == arr[j + 1].cnt1 && arr[j].cnt2 < arr[j + 1].cnt2)) {
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }

  // printf("-----------------\n");
  for (int i = 0; i < n; i++) {
    printf("%s\n", arr[i].str);
  }

  free(arr);
}
// 5
// History
// Politics
// DonQuixote
// LaPeste
// Chaos