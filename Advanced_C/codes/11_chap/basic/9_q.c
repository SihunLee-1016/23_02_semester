#include <stdio.h>

typedef struct {
  int h;
  int l;
  char ispass;
  int diff;
  int cutline;

} result;

void passorfail(result *p) {
  if (p->h - p->l <= p->diff) {
    p->ispass = 'P';
  } else {
    p->ispass = 'F';
  }
  p->diff = p->h - p->l;
}

int main() {
  result data;

  scanf("%d %d %d", &data.h, &data.l, &data.diff);

  passorfail(&data);
  printf("%d %c", data.diff, data.ispass);
  return 0;
}