#include <stdio.h>
#include <string.h>

#define SIZE 100

int palindrome (int i, int j, char array[SIZE]);

int main () {
  char array[SIZE];
  int i = 0, j;
  scanf("%s", array);
  j = strlen(array) - 1;
  if(palindrome(i, j, array) == 1) {
    printf("'%s' is a palindrome\n", array);
    return 0;
  }
  printf("'%s' is not a palindrome\n", array);
  return -1;
}

int palindrome (int i, int j, char array[SIZE]) {
  if (i >= j) {
    return 1;
  }
  if(array[i] == array[j]) {
    return palindrome(i + 1, j - 1, array);
  }
  return -1;
}
