#include <stdio.h>
void checkPrime(int N) {
  int flag = 1; // flag to indicate whether N is prime or not
  for (int i = 2; i <= N / 2; i++) {
    if (N % i == 0) { // if N is divisible by i, then N is not prime
      flag = 0; // change flag to 0 for non-prime number
      break; // stop the loop
    }
  }
  if (N == 0 || N == 1) { // 0 and 1 are not prime numbers
    flag = 0; // change flag to 0 for non-prime number
  }
  if (flag) { // flag is 1 for prime numbers
    printf("%d is a prime number.\n", N);
  } else { // flag is 0 for non-prime numbers
    printf("%d is not a prime number.\n", N);
  }
  return;
}

int main() {
  int N; // input number
  printf("Enter a positive integer: ");
  scanf("%d", &N); // read input from user
  checkPrime(N); // call function to check prime number
  return 0;
}
