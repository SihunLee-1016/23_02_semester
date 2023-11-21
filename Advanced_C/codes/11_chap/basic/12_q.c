#include <stdio.h>

typedef struct {
  char name[9];
  int g1;
  int g2;
  int g3;
  float t_avg;
  float m_avg;
} data;

void read_data(data data[]) {

  int total = 0;

  for (int i = 0; i < 10; i++) {
    scanf("%s %d %d %d", data[i].name, &data[i].g1, &data[i].g2, &data[i].g3);
    total = total + data[i].g1 + data[i].g2 + data[i].g3;
  }

  int val = total / 30.0;
  for (int i = 0; i < 10; i++) {
    data[i].t_avg = val;
  }
}

void cal_avg(data data[]) {
  int avg = 0;

  for (int i = 0; i < 10; i++) {
    data[i].m_avg = (data[i].g1 + data[i].g2 + data[i].g3) / 3.0;
  }
}

// 내-작
// 오-큰
void sort(data stu[]) {

  data tmp;

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (stu[j].m_avg > stu[j + 1].m_avg) {
        tmp = stu[j];
        stu[j] = stu[j + 1];
        stu[j + 1] = tmp;
      }
    }
  }
}
void print_score(data data[]) {
  // for (int i = 0; i < 10; i++) {
  //   printf("%s, %.1f\n", data[i].name, data[i].m_avg);
  // }

  printf("%s %.2f\n", data[9].name, data[9].m_avg);
  printf("%s %.2f\n", data[0].name, data[0].m_avg);

  float cutline = data[0].t_avg * 0.7;

  for (int i = 2; i >= 0; i--) {
    printf("%s %.2f\n", data[i].name, data[i].m_avg);
  }
}

int main() {
  data data[10];

  read_data(data);
  cal_avg(data);
  sort(data);
  print_score(data);
}