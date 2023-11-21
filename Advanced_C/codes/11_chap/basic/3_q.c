#include <stdio.h>

struct data {
  char name[9];
  int score;
};

int main() {
  struct data val[5];
  float total = 0.0;

  for (int i = 0; i < 5; i++) {
    scanf("%s %d", val[i].name, &val[i].score);
    total += (float)val[i].score;
  }

  for (int i = 0; i < 5; i++) {
    if ((float)val[i].score < (total / 5.0))
      printf("%s\n", val[i].name);
  }
}