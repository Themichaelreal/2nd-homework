#include <stdio.h>

int main() {
  int num1, num2;
  int sum, difference, product, quotient;

  printf("enter 2 integers: ");
  scanf("%d %d", &num1, &num2);

  sum = num1 + num2;
  difference = num1 - num2;
  product = num1 * num2;
  quotient = num1 / num2;

  printf("Sum = %d\n", sum);
  printf("difference = %d\n", difference);
  printf("product = %d\n", product);
  printf("quotient = %d\n", quotient);

  return 0;
}
