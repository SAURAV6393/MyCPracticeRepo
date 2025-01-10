////SUM OF SERIES = X + X^2/2! + X^4/4! + X^6/6! + .......
#include <stdio.h>
#include <math.h>

double Series(double x, int n)
 {
  double sum = x, term = x, fct = 1, p = x, multi = 2;
  printf("SERIES IS :  ");
  for (int i = 1; i <= n; i++) {
    fct = fct * multi * (multi - 1);
    p = p * x * x;
    multi += 2;
    printf(" %d ",(p/fct));  
    
    sum = sum + (p / fct);
    
  }
  return sum;
}

int main() {
  double x;
  int n;
  printf("Enter the value of x: ");
  scanf("%lf", &x); 
  printf("Enter the number of terms: ");
  scanf("%d", &n); 
  printf("\nThe sum of the series is: %lf\n", Series(x, n));
  return 0;
}

