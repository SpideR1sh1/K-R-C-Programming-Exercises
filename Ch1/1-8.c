#include <stdio.h>

int main() {
  int c;
  int btnl = 0;
  // program to count blanks tabs and newlines and print the number of each
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      btnl++;
    } else if (c == '\t') {
      btnl++;
    } else if (c == ' ') {
      btnl++;
    }
  }
  printf("%d\n", btnl);
}