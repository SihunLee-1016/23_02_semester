#include <stdio.h>

struct time {
  int hour;
  int min;
  int sec;
};

int main() {
  struct time val1;
  struct time val2;
  struct time diff;

  // scanf("%d %d %d", &val.hour)
  scanf("%d %d %d", &val1.hour, &val1.min, &val1.sec);
  scanf("%d %d %d", &val2.hour, &val2.min, &val2.sec);

  diff.hour = val2.hour - val1.hour;
  diff.min = val2.min - val1.min;
  diff.sec = val2.sec - val1.sec;

  if (diff.sec < 0) {
    diff.sec = 60 + diff.sec;
    diff.min = diff.min - 1;
  }
  if (diff.min < 0) {
    diff.min = 60 + diff.min;
    diff.hour = diff.hour - 1;
  }

  printf("%d %d %d", diff.hour, diff.min, diff.sec);
}