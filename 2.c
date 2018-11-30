#include <stdio.h>

int sedraH (int a, int q, int n);

int main () {
  int a, q, n;
  scanf("%d%d%d", &a, &q, &n);
  printf("%d\n", sedraH(a, q, n));
  return 0;
}

int sedraH (int a, int q, int n) {
  if (n == 1) {
    return a;
  }
  return q * sedraH(a, q, n - 1);
}
