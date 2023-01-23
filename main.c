#include <stdio.h>

int main(void) {
  char str[] = "hello";
  int x = 0;
  int count = 0;
  while (str[x] != '\0') {
    count = count + 1;
    x = x + 1;
  }
  printf("%s\n", str);
  printf("length : %d", count);
  return (0);
}