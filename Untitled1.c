#include <stdio.h>
#include<math.h>
float calculateFactorial(int n);
float calculateTerm(float x, int n);
int main() {
    float x, sum = 0;
    int n;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        sum +=calculateTerm(x, 2 * i);
    }
    float sum1=sum+x-1;
    printf("Sum of the series: %f\n", sum1);
}
float calculateTerm(float x, int n) {
    return pow(x, n) / calculateFactorial(n);
}
float calculateFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n*calculateFactorial(n-1);}
}