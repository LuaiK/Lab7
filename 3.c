#include <stdio.h>

int doubles (char a, char b, int counter);

int main () {
  char a, b = '0';
  int counter = 0;
  scanf("%c", &a);
  counter = doubles(a, b, counter);
  printf("%d\n", counter);
  return 0;
}

int doubles (char a, char b, int counter) {
  scanf("%c", &b);
  if (b == '\n') {
    return counter;
  }
  if (a == b) {
    counter++;
  }
  a = b;
  return doubles(a, b, counter);
}
