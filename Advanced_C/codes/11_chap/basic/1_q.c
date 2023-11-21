#include <stdio.h>

struct vector {
  int x;
  int y;
  int z;
};

int main() {
  struct vector val1;
  struct vector val2;
  struct vector val3;

  scanf("%d %d %d", &val1.x, &val1.y, &val1.z);
  scanf("%d %d %d", &val2.x, &val2.y, &val2.z);

  val3.x = val1.x * val2.x;
  val3.y = val1.y * val2.y;
  val3.z = val1.z * val2.z;

  printf("%d %d %d\n", val3.x, val3.y, val3.z);
  printf("%d", val3.x + val3.y + val3.z);
}