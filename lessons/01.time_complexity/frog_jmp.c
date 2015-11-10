#include "stdio.h"
#include <math.h>

int solution(int X, int Y, int D);

int main() {
  printf("%d\n", solution(10, 85, 30));
}

int solution(int X, int Y, int D) {
  double k = (2.0*(Y - X)/D + 1)/2;
  k = (double)(int)(k + 0.5);
  if (k >= 1.0*(Y - X)/D + 1) {
    k = k - 1;
  }
  return (int)k;
}
