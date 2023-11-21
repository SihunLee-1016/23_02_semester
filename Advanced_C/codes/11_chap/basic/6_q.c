#include <stdio.h>

struct data {
  int sex;
  int wei;
  int hei;
};

int main() {
  int n;

  int g1 = 0;
  int g2 = 0;
  int g3 = 0;
  scanf("%d", &n);

  struct data data[n];

  for (int i = 0; i < n; i++) {
    scanf("%d %d %d", &data[i].sex, &data[i].wei, &data[i].hei);
    if (data[i].sex == 1) {
      if (data[i].hei < 165) {
        if (data[i].wei < 60)
          g1 += 1;
        else if (data[i].wei >= 60 && data[i].wei < 70)
          g3 += 1;
        else
          g2 += 1;
      } else if (data[i].hei >= 165 && data[i].hei < 175) {
        if (data[i].wei < 60)
          g2 += 1;
        else if (data[i].wei >= 60 && data[i].wei < 70)
          g1 += 1;
        else
          g3 += 1;
      } else {
        if (data[i].wei < 60)
          g3 += 1;
        else if (data[i].wei >= 60 && data[i].wei < 70)
          g2 += 1;
        else
          g1 += 1;
      }
    } else {
      if (data[i].hei < 165) {
        if (data[i].wei < 50)
          g1 += 1;
        else if (data[i].wei >= 50 && data[i].wei < 60)
          g3 += 1;
        else
          g2 += 1;
      } else if (data[i].hei >= 165 && data[i].hei < 175) {
        if (data[i].wei < 50)
          g2 += 1;
        else if (data[i].wei >= 50 && data[i].wei < 60)
          g1 += 1;
        else
          g3 += 1;
      } else {
        if (data[i].wei < 50)
          g3 += 1;
        else if (data[i].wei >= 50 && data[i].wei < 60)
          g2 += 1;
        else
          g1 += 1;
      }
    }
  }

  printf("%d %d %d", g1, g2, g3);
}
