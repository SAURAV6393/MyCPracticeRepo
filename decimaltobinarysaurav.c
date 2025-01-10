#include <stdio.h>

void decimalToBinary(int decimalNumber) {
    if (decimalNumber == 0) {
        printf("Binary: 0\n");
        return;
    }

    int binaryNumber[32]; // Assuming 32-bit integer
    int index = 0;

    while (decimalNumber > 0) {
        binaryNumber[index] = decimalNumber % 2;
        decimalNumber /= 2;
        index++;
    }

    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binaryNumber[i]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    decimalToBinary(decimalNumber);

    return 0;
}