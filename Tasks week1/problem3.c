#include <stdio.h>

int main(void) {
  int value;
  float value2;
  printf(" please enter a dollars and cents amount: ");
  value2 = scanf (" %d", &value);
  value2 = value*1.05;
  printf(" the value after tax added is %.2f", value2);
  return 0;
}