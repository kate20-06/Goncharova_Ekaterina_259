#include <stdio.h>
#include <string.h>
#include "scanf_checker.h"
#include "math_operations.h"

int main() {
  printf("Hello. It's calcultor. Sorry it isn't so smat. You can use numbers and some operations: +, -, *, /");
  printf("\nPlease use ^C, if you want to stop\n");
  double num1 = 0.0;
  scanf_checker("%lf", &num1);
  while (1) {
    char operation = ' ';
    scanf_checker(" %c ", &operation);
    operation_checker(&operation);
    double num2 = 0.0;
    scanf_checker("%lf", &num2);
    num1 = result (&num1, &num2, &operation);
    printf("%lf\n", num1);
  }
  return 0;
}