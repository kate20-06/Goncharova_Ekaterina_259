#include <stdio.h>
#include <string.h>
#include "scanf_checker.h"

void clear_buffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
}

void scanf_checker(const char* format, void* num)
{
  while (scanf(format, num) != 1) {
    printf("Invalid input. Please try again.\n");
    clear_buffer();
  }
}

void operation_checker(char* operation) {
  char valid_operations[] = "+-*/";
  while (strchr(valid_operations, *operation) == NULL) {
    printf("Invalid input. Please try again.\n");
    clear_buffer();
    scanf_checker(" %c ", operation);
  }
}