#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void input(int *p, int M) {

  int i = 0;
  int *pp;

  pp = p;
  for (; pp < p + M; pp++) {
    scanf("%d", pp);
  }
}

int *sel_max(int *p, int M) {
  int cnt;
  int prev_cnt = 0;
  int *q, *ret;

  int *pp;
  pp = p;
  for (; pp < p + M; pp++) {
    cnt = 0;
    for (q = pp; q < p + M; q++) {
      if (*q == *pp)
        cnt += 1;
    }
    if (cnt > prev_cnt) {
      prev_cnt = cnt;
      ret = pp;
    }
  }
  return (ret);
}

void output(int *p, int N) {
  int *pp;
  pp = p;
  for (; pp < p + N; pp++)
    printf("%d ", *pp);
}

int main(void) {
  int in[100], out[100], *max, i, N, M;

  scanf("%d %d", &N, &M);

  for (i = 0; i < N; i++) {
    input(in, M);
    max = sel_max(in, M);
    out[i] = *max;
  }

  output(out, N);
  return 0;
}