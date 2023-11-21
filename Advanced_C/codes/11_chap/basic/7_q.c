#include <stdio.h>

struct data {
  int number;
  int rank;
};

void calRank(int arr[], struct data ranks[], int size) {
  for (int i = 0; i < size; i++) {
    ranks[i].number = arr[i];
    ranks[i].rank = 1;

    for (int j = 0; j < size; j++) {
      if (arr[j] > arr[i]) {
        ranks[i].rank++;
      }
    }
  }
}

void printRank(struct data ranks[], int rank) {
  for (int i = 0; i < 10; i++) {
    if (ranks[i].rank == rank) {
      printf("%d ", ranks[i].number);
    }
  }
}

int main() {
  int numbers[10];

  for (int i = 0; i < 10; i++)
    scanf("%d", &numbers[i]);

  struct data ranks[10];

  calRank(numbers, ranks, 10);

  printRank(ranks, 3);
  printRank(ranks, 7);

  return 0;
}
