#include <stdio.h>
// Function to swap two numbers using call by reference
void swap(int *x, int *y) {
  int temp; // temporary variable to store the value of x
  temp = *x; // copy the value of x to temp
  *x = *y;   // copy the value of y to x
  *y = temp; // copy the value of temp to y
  printf("Inside the function, x = %d and y = %d\n", *x, *y);
}

int main() {
  int a, b; // variables to store the user input
  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b); // read the input from the user
  printf("Before swapping, a = %d and b = %d\n", a, b); // print the values before swapping
  swap(&a, &b); // call the swap function with the addresses of a and b as arguments
  printf("After swapping, a = %d and b = %d\n", a, b); // print the values after swapping
  return 0;
}
