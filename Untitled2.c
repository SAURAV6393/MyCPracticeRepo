#include<stdio.h>
float calculateFactorial(int n);
float calculateTerm(float x,int n);
int main()
{
	float x,
}
//#include <stdio.h>
//#include <math.h>
//
//// Function to calculate the factorial of a number
//int factorial(int n) {
//  int f = 1;
//  for (int i = 1; i <= n; i++) {
//    f = f * i;
//  }
//  return f;
//}
//
//// Function to calculate the sum of the series
//double sum_of_series(double x, int n) {
//  double sum = 0;
//  for (int i = 0; i < n; i++) {
//    // The term is 2x + x^2/2! + x^4/4! + ...
//    // The power of x is 2i and the factorial is 2i!
//    double term = pow(x, 2 * i) / factorial(2 * i);
//    // The coefficient is 2 for even terms and 1 for odd terms
//    double coef = (i % 2 == 0) ? 2 : 1;
//    // Add the term to the sum
//    sum = sum + coef * term;
//  }
//  return sum;
//}
//
//// Main function to test the program
//int main() {
//  // Input the value of x and the number of terms
//  double x;
//  int n;
//  printf("Enter the value of x: ");
//  scanf("%lf", &x);
//  printf("Enter the number of terms: ");
//  scanf("%d", &n);
//
//  // Calculate and print the sum of the series
//  double sum = sum_of_series(x, n);
//  printf("The sum of the series is: %.4f\n", sum);
//
//  return 0;
//}
