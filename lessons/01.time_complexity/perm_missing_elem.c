#include "stdio.h"

int solution(int A[], int N);

int main() {
  int A[4];
  A[0] = 2;
  A[1] = 3;
  A[2] = 1;
  A[3] = 5;
  int result = solution(A, 4);
  if (4 == result) {
    printf("correct\n");
  } else {
    printf("incorrect\n");
  }
}

int solution(int A[], int N) {
  int NSum = 0;
  int i;
  for (i = 1; i <= N + 1; i++) {
    NSum += i;
  }
  printf("%d\n", NSum);
  int ASum = 0;
  for (i = 0; i < N; i++) {
    ASum += A[i];
  }
  printf("%d\n", ASum);
  return NSum - ASum;
}
