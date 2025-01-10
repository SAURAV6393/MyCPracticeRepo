#include <stdio.h>

int main() {
  double num1, num2, result;
  char op;
  printf("Enter the first number: ");
  scanf("%lf", &num1);
  printf("Enter the second number: ");
  scanf("%lf", &num2);

  // Prompt the user to enter the operation
  printf("Enter the operation (+, -, *, /): ");
  scanf(" %c", &op); // Note the space before %c to ignore whitespace

  // Use a switch case to perform the operation based on the user's choice
  switch (op) {
    case '+':
      result = num1 + num2; // Add the numbers and store the result
      break; 
    case '-': 
      result = num1 - num2; // Subtract the numbers and store the result
      break; 
    case '*': 
      result = num1 * num2; // Multiply the numbers and store the result
      break; 
    case '/': 
      // Check if the second number is zero to avoid division by zero error
      if (num2 == 0) {
        printf("Error: Cannot divide by zero\n"); // Print an error message
        return 1; 
      }
      result = num1 / num2; 
      break; 
    default: // If the user entered anything else
      printf("Error: Invalid operation\n"); // Print an error message
      return 1; 
  }
  printf("%f %c %f = %f\n", num1, op, num2, result);
  return 0; 
}
