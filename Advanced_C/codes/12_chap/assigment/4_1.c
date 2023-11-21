#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
  char *name;     // 이름 저장
  int firstStage; // 1단계 점수 저장
  int interview;  // 면접 점수 저장
  double sum;     // 총점 저장
};

int main() {
  int N, M, i, j, len;
  char tmp[11];
  struct student tmp_st;
  scanf("%d %d", &N, &M);
  struct student *st = malloc(N * sizeof(struct student));
  if (st == NULL)
    return -1;

  for (i = 0; i < N; i++) {
    scanf("%s %d %d", tmp, &st[i].firstStage, &st[i].interview);
    len = strlen(tmp);
    st[i].name = (char *)malloc((len + 1) * sizeof(char));
    strcpy(st[i].name, tmp);
    if (st[i].name == NULL)
      return -1;
    st[i].sum = st[i].firstStage * 0.7 + st[i].interview * 0.3;
  }

  for (i = 0; i < N - 1; i++) {
    for (j = 0; j < N - 1; j++) {
      if (st[j].sum < st[j + 1].sum) {
        tmp_st = st[j];
        st[j] = st[j + 1];
        st[j + 1] = tmp_st;
      }
    }
  }
  for (i = 0; i < M; i++) {
    printf("%s %.1lf\n", st[i].name, st[i].sum);
  }

  for (i = 0; i < N; i++) {
    free(st[i].name);
  }
  free(st);

  return 0;
}