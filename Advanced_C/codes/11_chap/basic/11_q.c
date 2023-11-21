#include <stdio.h>

typedef struct {
  char name[9];
  int score;
} data;

data *select_min(data *p) {
  int min_val;

  data *q;
  data *ret;
  for (q = p; q < p + 5; q++) {
    if (p == q) {
      min_val = q->score;
      ret = q;
      continue;
    }
    if (min_val > q->score) {
      min_val = q->score;
      ret = q;
    }
  }
  return (ret);
}

int main() {
  data val[5];
  data *p;

  for (p = val; p < val + 5; p++)
    scanf("%s %d", p->name, &p->score);

  data *ret;
  ret = select_min(val);

  printf("%s %d", ret->name, ret->score);
}