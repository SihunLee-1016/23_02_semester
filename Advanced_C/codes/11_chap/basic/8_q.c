#include <stdio.h>

typedef struct {
  float a;
  float b;
} complex;

complex add(complex data1, complex data2) {
  complex ret;

  ret.a = data1.a + data2.a;
  ret.b = data1.b + data2.b;

  return ret;
}
int main() {

  complex data1;
  complex data2;

  scanf("%f %f", &data1.a, &data1.b);

  scanf("%f %f", &data2.a, &data2.b);

  complex ret;

  ret = add(data1, data2);

  printf("%.1f + %.1fi", ret.a, ret.b);
}