#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int row;
  int col;
  char letter = 'a';
  int flag = 0;
  scanf("%d %d", &col, &row);

  char **str = malloc(sizeof(char *) * row);

  for (int i = 0; i < row; i++) {
    str[i] = malloc(sizeof(char) * col);

    for (int j = 0; j < col; j++) {
      if (letter >= 'a' && letter <= 'z') {
        str[i][j] = letter;
        letter++; // z 넣고 아래로 빠짐.
        if (letter > 'z') {
          letter = letter - 58;
          continue;
        }
      }
      if (letter >= 'A' && letter <= 'Z') {
        str[i][j] = letter;
        letter++;
        if (letter > 'Z')
          letter = letter + 6;
      }
    }
  }

  for (int i = 0; i < row; i++) {
    printf("%s\n", str[i]);
  }

  for (int i = 0; i < row; i++) {
    free(str[i]);
  }
  free(str);
}