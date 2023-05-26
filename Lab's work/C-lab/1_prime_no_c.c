#include <stdio.h>

int main() {

  int n, i, prime = 1;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // 0 and 1 are not prime numbers
  // change prime to 1 for non-prime number
  if (n == 0 || n == 1)
    prime = 0;

  for (i = 2; i <= n / 2; ++i) {

    // if n is divisible by i, then n is not prime
    // change prime to 1 for non-prime number
    if (n % i == 0) {
      prime =0;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (prime == 1)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return 0;
}