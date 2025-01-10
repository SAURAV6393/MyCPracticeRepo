#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fileNUM, *fileEVEN, *fileODD;
    int num1, num2;

    // Open NUM.txt for writing
    fileNUM = fopen("NUM.txt", "w");
    if (fileNUM == NULL) {
        printf("Error creating NUM.txt.\n");
        exit(EXIT_FAILURE);
    }

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Write integers to NUM.txt
    fprintf(fileNUM, "%d %d", num1, num2);
    fclose(fileNUM);

    // Open NUM.txt for reading
    fileNUM = fopen("NUM.txt", "r");
    if (fileNUM == NULL) {
        printf("Error opening NUM.txt for reading.\n");
        exit(EXIT_FAILURE);
    }

    // Open EVEN.txt and ODD.txt for writing
    fileEVEN = fopen("EVEN.txt", "w");
    fileODD = fopen("ODD.txt", "w");

    // Separate even and odd numbers
    while (!feof(fileNUM)) {
        int num;
        fscanf(fileNUM, "%d", &num);
        if (num % 2 == 0)
            fprintf(fileEVEN, "%d\n", num);
        else
            fprintf(fileODD, "%d\n", num);
    }

    // Close all files
    fclose(fileNUM);
    fclose(fileEVEN);
    fclose(fileODD);

    // Display contents of EVEN.txt
    printf("\nContents of EVEN.txt:\n");
    fileEVEN = fopen("EVEN.txt", "r");
    while (!feof(fileEVEN)) {
        int num;
        fscanf(fileEVEN, "%d", &num);
        printf("%d\n", num);
    }
    fclose(fileEVEN);

    // Display contents of ODD.txt
    printf("\nContents of ODD.txt:\n");
    fileODD = fopen("ODD.txt", "r");
    while (!feof(fileODD)) {
        int num;
        fscanf(fileODD, "%d", &num);
        printf("%d\n", num);
    }
    fclose(fileODD);

    return 0;
}
