#include <stdio.h>

int main() {

  int n, r = 0, re;

  printf("Shkruaj nje numer: ");
  scanf("%d", &n);

  while (n != 0) {
    re = n % 10;
    r = r * 10 + re;
    n /= 10;
  }

  printf("Numri invert eshte = %d", r);

  return 0;
}
