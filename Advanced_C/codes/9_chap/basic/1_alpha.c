#include <stdio.h>

void input(int *p, int M) {
  int i;
  for (i = 0; i < M; i++) {
    scanf("%d", p + i);
  }
}

int *sel_max(int *p, int M) {
  int i, *max, *q, *r;
  int cnt1 = 0, cnt2 = 0;
  q = p;

  for (q = p; q < p + M; q++) {
    for (r = q; r < p + M; r++) {
      if (*q == *r)
        cnt1++;
    }
  }
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