#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 5
// HongGilDong 1003 Math 85 C 80 AdvC 90
// JeonWooChi 1001 English 60 C 75 Physics 80 Math 70
// HeungBoo 1002 Economics 80 AdvC 90 Math 80 C 90
// NolBoo 1004 Ethics 50 C 62
// Euler 1005 Math 100 Physics 90 AdvC 85
// 2

// 전체로직
// 문자열을 받아, 공백을 기준으로 전체 단어 개수 파악.
//  (전체 단어 개수 - 2) / 2 = 과목의 개수이다.
//  strtok를 사용하여 값들을 strcpy를 통해 넣어준다.
//  (문자열 할당할때 +1 하는거 잊지않기.)

// 과목명을 받을때, psub 포인터가 가르키는 값이 있도록 할당해준다.
// 이후 문제 요구사항대로 버블정렬 사용.

struct subject {
  char *name;   // 과목 이름
  double score; // 과목 점수
};

struct student {
  char *name;           // 학생 이름
  char id[5];           // 학생 학번
  int numSubject;       // 과목 개수
  struct subject *psub; // 과목 구조체 포인터
  double avg;           // 모든 과목의 평균 점수
};

int main() {
  int n;
  char str[100];
  char *tmp;
  struct student *data;

  scanf("%d", &n);
  getchar();
  data = malloc(sizeof(struct student) * n);
  if (data == NULL)
    return 1;

  int cnt;

  for (int i = 0; i < n; i++) {
    cnt = 0;

    gets(str);

    for (int j = 0; j < (int)strlen(str); j++) {
      if (str[j] == ' ')
        cnt += 1;
    }
    cnt += 1; // 단어 개수

    data[i].numSubject = (cnt - 2) / 2;
    tmp = strtok(str, " ");
    data[i].name = malloc(sizeof(char) * ((int)strlen(tmp) + 1));
    strcpy(data[i].name, tmp);
    tmp = strtok(NULL, " ");
    strcpy(data[i].id, tmp);

    data[i].psub = malloc(sizeof(struct subject) * data[i].numSubject);
    if (data[i].psub == NULL)
      return 1;
    for (int k = 0; k < data[i].numSubject; k++) {
      tmp = strtok(NULL, " ");
      data[i].psub[k].name = malloc(sizeof(char) * ((int)strlen(tmp) + 1));
      strcpy(data[i].psub[k].name, tmp);

      tmp = strtok(NULL, " ");
      data[i].psub[k].score = (double)atoi(tmp);
      data[i].avg += data[i].psub[k].score;
    }
    data[i].avg = data[i].avg / data[i].numSubject;
  }

  struct student temp;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (data[j].avg < data[j + 1].avg) {
        temp = data[j];
        data[j] = data[j + 1];
        data[j + 1] = temp;
      } else if (data[j].avg == data[j + 1].avg) {
        if (strcmp(data[j].id, data[j + 1].id) > 0) {
          temp = data[j];
          data[j] = data[j + 1];
          data[j + 1] = temp;
        }
      }
    }
  }

  int num;
  scanf("%d", &num);

  num -= 1;
  printf("%s %s %.2lf ", data[num].name, data[num].id, data[num].avg);

  struct subject temp2;

  for (int i = 0; i < data[num].numSubject; i++) {
    for (int j = 0; j < data[num].numSubject - i - 1; j++) {
      if (data[num].psub[j].score < data[num].psub[j + 1].score) {
        temp2 = data[num].psub[j];
        data[num].psub[j] = data[num].psub[j + 1];
        data[num].psub[j + 1] = temp2;
      }
    }
  }
  printf("%s %.2lf\n", data[num].psub[0].name, data[num].psub[0].score);

  for (int i = 0; i < n; i++) {
    free(data[i].name);
    for (int j = 0; j < data[i].numSubject; j++) {
      free(data[i].psub[j].name);
    }
    free(data[i].psub);
  }
  free(data);
}