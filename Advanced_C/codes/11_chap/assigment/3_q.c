#include <stdio.h>
#include <string.h>
struct hotel_info {
  char name[30];
  int grade;
  double pop;
  double distance;
  char bab;
};

int in_hotel_info(struct hotel_info *p) {
  int cnt = 0;

  while (1) {
    scanf("%s %d %lf %lf %c", p->name, &p->grade, &p->pop, &p->distance,
          &p->bab);

    if (strcmp(p->name, "0") == 0)
      return cnt;
    cnt++;
    p++;
  }
}

void out_hotel_info(struct hotel_info *p, int N, int G, double D);

int main() {
  struct hotel_info *data;

  int cnt = in_hotel_info(data);
}
// marriott 4 4.7 12.5 Y
// novotel 3 3.0 2.7 N
// renaissance 3 3.5 4.8 N
// hyatt 5 3.5 7.4 Y
// bestwestern 2 2.5 3.8 Y