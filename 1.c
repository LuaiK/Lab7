#include <stdio.h>

int recursiveBy (int a, int x);

int main () {
  int a, x;
  scanf("%d%d", &a, &x);

  printf("%d\n", recursiveBy(a, x));
  return 0;
}

int recursiveBy (int a, int x) {
  if (x == 1) {
    return a;
  }
  return a + recursiveBy(a, x-1);
}
