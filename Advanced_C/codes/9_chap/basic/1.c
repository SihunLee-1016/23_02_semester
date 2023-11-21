#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
  int x, y, z;

  int *px, *py, *pz, *tmp;

  px = &x;
  py = &y;
  pz = &z;

  scanf("%d %d %d", px, py, pz);
  tmp = py;
  py = px;
  px = pz;
  pz = tmp;

  printf("%d %d %d", *px, *py, *pz);
}