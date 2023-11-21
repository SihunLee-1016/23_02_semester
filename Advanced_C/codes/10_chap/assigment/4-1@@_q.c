#include <stdio.h>
#include <string.h>

int check_u(char *p, char *q) {
  int i = 0;
  int ret = 0;
  char *start;

  for (start = p; start < q; start++) {
    if (!((*start >= 'A' && *start <= 'Z') ||
          (*start >= 'a' && *start <= 'z') || *start == ' '))
      ret += 1;
  }
  return (ret);
}

int main() {
  int N, i, max, val;
  char result[100];

  scanf("%d", &N);

  char str[N][100];

  for (i = 0; i < N; i++)
    gets(str[i]);

  for (i = 0; i < N; i++) {
    val = check_u(str[i], (str[i] + strlen(str[i])));
    if (i == 0) {
      max = val;
      continue;
    }
    if (val > max) {
      bzero(result, strlen(result));
      strcpy(result, str[i]);
      max = val;
    }
  }
  printf("%s\n", result);
}

// How are you doing?
// **Notice**
// 1+1=2
// 1 year is 365 days.
// Winter is coming.