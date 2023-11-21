#include <stdio.h>
#include <string.h>

int main() {
  char ch[20];
  fgets(ch, sizeof(ch), stdin); // 표준 입력(stdin)으로부터 문자열을 읽어옴

  char *pound = strchr(ch, '#'); // 첫 번째 '#'의 위치 찾기
  if (pound != NULL) {           // '#'이 있으면
    char *ptr = pound - 1;       // '#' 바로 앞 문자부터 시작
    while (ptr >= ch) {          // 배열의 시작 지점까지 반복
      putchar(*ptr);             // 해당 위치의 문자 출력
      ptr--;                     // 포인터를 하나 뒤로 이동시킴
    }
    // putchar();
  }

  return 0;
}
