#include <stdio.h>

// Function to calculate the nth Fibonacci term using recursion
int fibonacci(int n) {
  // Base case
  if (n == 0 || n == 1) {
    return n;
  }
  // Recursive case
  else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

// Main function to test the program
int main() {
  // Input the number of terms
  int n = 7;
  // Print the Fibonacci sequence up to n terms
  printf("The Fibonacci sequence up to %d terms is:\n", n);
  for (int i = 0; i < n; i++) {
    printf("%d ", fibonacci(i));
  }
  printf("\n");
  return 0;
}
																										