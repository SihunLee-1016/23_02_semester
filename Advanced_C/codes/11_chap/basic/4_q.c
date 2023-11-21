#include <stdio.h>

struct data {
  char name[19];
  int e1;
  int e2;
  int e3;
  float avg;
  char score;
};

int main() {
  int num;

  scanf("%d", &num);

  struct data data[num];

  for (int i = 0; i < num; i++) {
    scanf("%s %d %d %d", data[i].name, &data[i].e1, &data[i].e2, &data[i].e3);
    data[i].avg = (data[i].e1 + data[i].e2 + data[i].e3) / 3.0;
  }

  for (int i = 0; i < num; i++) {
    printf("%s %.1f ", data[i].name, data[i].avg);
    if (data[i].avg >= 90.0)
      printf("A\n");
    if (data[i].avg >= 80.0 && data[i].avg < 90.0)
      printf("B\n");
    if (data[i].avg >= 70.0 && data[i].avg < 80.0)
      printf("C\n");
    if (data[i].avg < 70)
      printf("F\n");
  }
}