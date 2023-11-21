#include <stdio.h>
#include <stdlib.h>

typedef struct taxi_info {
  char start[11];  // 출발지 : 공백이 없는 영문자 최대 10개
  char target[11]; // 목적지 : 공백이 없는 영문자 최대 10개
  double distance; // 이동거리 : 출발지에서 목적지까지 거리, 단위는 (km) int
  int t_time; // t_time; // 정체시간 : 출발지에서 목적지까지 이동 중
              // 정체시간, 단위는 (초)
  char late_night; // 심야운행여부 : 'Y' 또는 'N'으로 표시
  int tot;         // 최종 taxi 요금
} TAXI;

int main() {
  int n;

  scanf("%d", &n);

  TAXI arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%s %s %lf %d %c", arr[i].start, arr[i].target, &arr[i].distance,
          &arr[i].t_time, &arr[i].late_night);
  }
  for (int i = 0; i < n; i++) {

    if (arr[i].late_night == 'Y') {
      arr[i].tot = 4800;
      if (arr[i].distance - 2.0 > 0) {
        arr[i].tot += ((int)(arr[i].distance - 2.0) * 1000) / (100 * 120);
      }
      arr[i].tot = arr[i].tot + 120 * (int)(arr[i].t_time / 30);
    }

    // 주간
    else {
      arr[i].tot = 3800;
      if (arr[i].distance - 2.0 > 0) {
        arr[i].tot += ((int)(arr[i].distance - 2.0) * 1000) / (100 * 100);
      }
      arr[i].tot += 100 * (arr[i].t_time / 30);
    }
  }
  for (int i = 0; i < n; i++) {
    printf("%s %s %d\n", arr[i].start, arr[i].target, arr[i].tot);
  }
}
