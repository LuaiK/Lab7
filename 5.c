#include <stdio.h>

int opposite (char c);

int main () {
  char c = '0';
  opposite (c);
  printf("\n");
  return 0;
}

int opposite (char c) {
  scanf("%c", &c);
  if (c == '\n') {
    return 1;
  }
  opposite(c);
  printf("%c", c);
  return 0;
}
