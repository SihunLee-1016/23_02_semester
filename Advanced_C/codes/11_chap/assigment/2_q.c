#include <stdio.h>

struct student {
  char name[20];
  int kor;
  int eng;
  int math;
};

struct average {
  double kor_avg;
  double eng_avg;
  double math_avg;
};

struct average calculate_avg(struct student *st, int N) {
  struct student *p;
  struct average ret;

  p = st;

  for (; p < st + N; p++) {
    ret.kor_avg += p->kor;
    ret.eng_avg += p->eng;
    ret.math_avg += p->math;
  }
  ret.kor_avg = ret.kor_avg / N;
  ret.eng_avg = ret.eng_avg / N;
  ret.math_avg = ret.math_avg / N;

  return ret;
}

int main() {
  int n;

  scanf("%d", &n);

  struct student val[n];

  for (int i = 0; i < n; i++) {
    scanf("%s %d %d %d", val[i].name, &val[i].kor, &val[i].eng, &val[i].math);
  }

  struct average avg;
  avg = calculate_avg(val, n);

  printf("%.1lf %.1lf %.1lf\n", avg.kor_avg, avg.eng_avg, avg.math_avg);
  int kcnt = 0;
  int ecnt = 0;
  int mcnt = 0;

  for (int i = 0; i < n; i++) {
    if (val[i].kor < avg.kor_avg)
      kcnt++;
    if (val[i].eng < avg.eng_avg)
      ecnt++;
    if (val[i].math < avg.math_avg)
      mcnt++;
  }
  printf("%d %d %d", kcnt, ecnt, mcnt);
}