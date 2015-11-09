#include "stdio.h"
#include "stdlib.h"

int solution(int A[], int N);
int main() {
  int A[100];
  A[0] = 3;
  A[1] = 1;
  A[2] = 2;
  A[3] = 4;
  A[4] = 3;
  int N = 5;
  int result = solution(A, N);
  if(result == 1) {
    printf("correct\n");
  } else {
    printf("incorrect\n");
  }
}

int solution(int A[], int N) {
  // A: 3   1   2   4   3
  // B: 3   4   6   10  13
  // A: 13  10  9   7   3

  int *B = (int*)malloc(N*sizeof(int));
  int sum = 0;
  int i;
  for(i = 0; i < N; i++) {
    B[i] = A[i] + sum;
    sum = B[i];
  }

  sum = 0;
  for(i = N - 1; i >= 0; i--) {
    A[i] = A[i] + sum;
    sum = A[i];
  }

  int min = -1;
  for (i = 1; i < N; i++) {
    int leftSum = B[i - 1];
    int rightSum = A[i];
    int difference = leftSum - rightSum;
    if (difference < 0){
      difference = -difference;
    }
    if (-1 == min || difference < min) {
      min = difference;
    }
  }
  return min;
}
