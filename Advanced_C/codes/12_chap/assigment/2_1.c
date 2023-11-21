#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strcmp는 반환값이 0 기준으로 나뉨

//  for (int i = 0; i <= (int)strlen(str1); i++) {
//    if (str1[i] == '\0' || str1[i] == ' ') {
//      word1[j] = (char *)malloc(sizeof(char) * (len + 1));
//      if (word1[j] == NULL)
//        return 1;
//      strncpy(word1[j], &str1[loc],
//              len); // loc은 공백의 위치. 위치로부터 공백까지의 길이.
//      word1[j][len] = '\0'; // 널 종료 문자 추가
//      loc = i + 1;
//      j++;
//      len = 0;
//    } else
//      len++;
//  }

int main() {
  char str1[100];
  char str2[100];

  gets(str1);
  gets(str2);

  int cnt1 = 0;
  int cnt2 = 0;

  for (int i = 0; i < (int)strlen(str1); i++) {
    if (str1[i] == ' ')
      cnt1++;
  }

  for (int i = 0; i < (int)strlen(str2); i++) {
    if (str2[i] == ' ')
      cnt2++;
  }

  cnt1 += 1;
  cnt2 += 1;

  char **word1;
  char **word2;

  word1 = malloc(sizeof(char *) * (cnt1));
  word2 = malloc(sizeof(char *) * (cnt2));

  if (word1 == NULL)
    return 1;
  if (word2 == NULL) {
    free(word1);
    return 1;
  }

  int len = 0;
  int j = 0;
  int loc = 0;

  // for (int i = 0; i < (int)strlen(str1); i++) {
  //   if (str1[i] == ' ')
  // }

  for (int i = 0; i <= (int)strlen(str1); i++) {
    if (str1[i] == '\0' || str1[i] == ' ') {
      word1[j] = (char *)malloc(sizeof(char) * (len + 1));
      if (word1[j] == NULL)
        return 1;
      strncpy(word1[j], &str1[loc],
              len); // loc은 공백의 위치. 위치로부터 공백까지의 길이.
      word1[j][len] = '\0'; // 널 종료 문자 추가
      loc = i + 1;
      j++;
      len = 0;
    } else
      len++;
  }

  len = 0;
  j = 0;
  loc = 0;

  int dupl = 0;

  for (int i = 0; i <= (int)strlen(str2); i++) {
    if (str2[i] == '\0' || str2[i] == ' ') {
      word2[j] = (char *)malloc(sizeof(char) * (len + 1));
      if (word2[j] == NULL)
        return 1;
      strncpy(word2[j], &str2[loc],
              len); // loc은 공백의 위치. 위치로부터 공백까지의 길이.
      word2[j][len] = '\0'; // 널 종료 문자 추가
      loc = i + 1;
      j++;
      len = 0;
    } else
      len++;
  }

  for (int i = 0; i < cnt1; i++) {
    for (int j = 0; j < cnt2; j++) {
      if (strcmp(word1[i], word2[j]) == 0)
        dupl++;
    }
  }
  // for (int i = 0; i < cnt1; i++)
  //   printf("@ %s\n", word1[i]);
  // for (int i = 0; i < cnt2; i++)
  //   printf("# %s\n", word2[i]);

  char **dup;
  dup = (char **)malloc(sizeof(char *) * dupl);
  if (dup == NULL)
    return 1;

  int k = 0;
  for (int i = 0; i < cnt1; i++) {
    for (int j = 0; j < cnt2; j++) {
      if (strcmp(word1[i], word2[j]) == 0) {
        dup[k] = (char *)malloc(sizeof(char) * 100);
        if (dup[k] == NULL)
          return 1;
        strcpy(dup[k], word1[i]);
        k++;
      }
    }
  }

  char *tmp;
  int val;

  for (int i = 0; i < dupl; i++) {
    for (int j = 0; j < dupl - i - 1; j++) {
      if (strlen(dup[j]) < strlen(dup[j + 1])) {
        tmp = dup[j];
        dup[j] = dup[j + 1];
        dup[j + 1] = tmp;
      } else if (strlen(dup[j]) == strlen(dup[j + 1])) {
        val = strcmp(dup[j], dup[j + 1]);
        if (val > 0) {
          tmp = dup[j];
          dup[j] = dup[j + 1];
          dup[j + 1] = tmp;
        }
      }
    }
  }
  for (int i = 0; i < dupl; i++)
    printf("%s\n", dup[i]);

  for (int i = 0; i < cnt1; i++)
    free(word1[i]);
  for (int i = 0; i < cnt2; i++)
    free(word2[i]);
  free(word1);
  free(word2);
  for (int i = 0; i < dupl; i++)
    free(dup[i]);
  free(dup);
}
// red orange yellow green blue purple abcd
// pink red yellow black white purple abcd blue