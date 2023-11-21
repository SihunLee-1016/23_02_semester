#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int year;
  int month;
  int day;
} date;

date *select_min(date *p, date *q) {
  if (p->year > q->year)
    return (q);
  else if (p->year < q->year)
    return (p);
  else {
    if (p->month > q->month)
      return (q);
    else if (p->month < q->month)
      return (p);
    else {
      if (p->day > q->day)
        return (q);
      else if (p->day < q->day)
        return (p);
      else
        return (p);
    }
  };
}

void split_val(char *str, date *val) {
  char *tmp;
  tmp = strtok(str, "/");
  val->year = atoi(tmp);
  tmp = strtok(NULL, "/");
  val->month = atoi(tmp);
  tmp = strtok(NULL, "/");
  val->day = atoi(tmp);
}

int main() {
  date val1;
  date val2;
  date *ret;
  char str1[100];
  char str2[100];

  char *tmp1;
  char *tmp2;

  scanf("%s", str1);
  scanf("%s", str2);

  split_val(str1, &val1);
  split_val(str2, &val2);

  ret = select_min(&val1, &val2);

  printf("%d/%d/%d", ret->year, ret->month, ret->day);
  // printf("%d %d %d", val1.year, val1.month, val1.day);
}