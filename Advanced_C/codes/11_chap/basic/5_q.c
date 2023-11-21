#include <stdio.h>

struct data {
  char name[7];
  int e1;
  int e2;
  int e3;
  float avg;
  char score;
};

int main() {
  int n;

  scanf("%d", &n);

  struct data data[n];

  struct data *p;

  for (p = data; p < data + n; p++) {
    scanf("%s %d %d %d", p->name, &p->e1, &p->e2, &p->e3);
    p->avg = (p->e1 + p->e2 + p->e3) / 3.0;
  }

  for (p = data; p < data + n; p++) {
    printf("%s %.1f ", p->name, p->avg);
    if (p->avg >= 90.0)
      printf("A\n");
    if (p->avg >= 80.0 && p->avg < 90.0)
      printf("B\n");
    if (p->avg >= 70.0 && p->avg < 80.0)
      printf("C\n");
    if (p->avg < 70)
      printf("D\n");
  }
}