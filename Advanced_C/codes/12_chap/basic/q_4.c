#include <stdio.h>
#include <stdlib.h>

typedef struct t_data {
  char name[7];
  int k;
  int e;
  int m;
  float avg;
} student;

int main() {
  int n;
  scanf("%d", &n);

  student *val = malloc(sizeof(student) * n);

  for (int i = 0; i < n; i++) {
    scanf("%s %d %d %d", val[i].name, &val[i].k, &val[i].e, &val[i].m);
    val[i].avg = (val[i].k + val[i].e + val[i].m) / 3.0;
  }

  for (int i = 0; i < n; i++) {
    printf("%s %.1f ", val[i].name, val[i].avg);
    if (val[i].k >= 90 || val[i].e >= 90 || val[i].m >= 90)
      printf("GREAT ");

    if (val[i].k < 70 || val[i].e < 70 || val[i].m < 70)
      printf("BAD ");
    printf("\n");
  }
  free(val);
}