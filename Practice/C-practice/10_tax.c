#include <stdio.h>
int main() {
  float income, tax;
  printf("Please enter your income:");
  scanf("%f", &income);
  if (income >= 1000000) {
    tax = 30 * (income - 1000000) / 100;
  } else if (income >= 500000 && income < 1000000) {
    tax = 20 * (income - 500000) / 100;
  } else if (income >= 250000 && income < 500000) {
    tax = 5 * (income - 250000) / 100;
  } else {
    tax = 0;
  }
  printf("The tax you have to pay is:%.3f\n", tax);
  return 0;
}