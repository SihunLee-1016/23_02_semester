#include <stdio.h>
#include <string.h>

int main() {
  char str[100];

  char tmp[101];
  char res[101];
  gets(str);
  int cnt = 0;
  int prev = 0;
  int i = 0;
  int j = 0;

  while (str[i]) {
    if (str[i] != ' ') {
      tmp[j] = str[i];
      j++;
    } else {
      tmp[j] = '\0';
      printf("j = %d, res = %s\n", j, res);
      if (strcmp(tmp, res) < 0)
        strcpy(res, tmp);
      j = 0;
    }
    i++;
  }
  printf("res = %s\n", res);
}

// why so happy -> 띄어쓰기의 인덱스를 저장..
// 각 문자 시작을 보고,,결정,,? 전체비교가필요하잖아,,
// 문자열 자체를 갖고있어야할텐데
