#include <math.h>
#include <stdio.h>
#include "scanf_checker.h"
#include "math_operations.h"


double sum(double* num1, double* num2) {
  return *num1 + *num2;
}

double difference(double* num1, double* num2) {
  return *num1 - *num2;
}

double composition(double* num1, double* num2) {
  return *num1 * *num2;
}

double quotient(double* num1, double* num2) {
  const double EPS = 0.000000001;
  if (fabs(*num2) < EPS) {
    scanf_checker("%lf", num2);
  }
  return *num1 / *num2;
}

double result (double* num1, double* num2, char* operation) {
  if (*operation == '+') { return sum(num1, num2); }
  else if (*operation == '-') { return difference(num1, num2); }
  else if (*operation == '*') { return composition(num1, num2); } 
  else { return quotient(num1, num2); }
}
