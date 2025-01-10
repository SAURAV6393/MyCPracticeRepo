#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fileA, *fileB;
    char data[1000];
=
    // Create and write data to file a.txt
    fileA = fopen("a.txt", "w");
    if (fileA == NULL) {
        printf("Unable to create file a.txt.\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter contents to store in file a.txt:\n");
    fgets(data, sizeof(data), stdin);
    fputs(data, fileA);
    fclose(fileA);

    // Copy contents from a.txt to b.txt
    fileA = fopen("a.txt", "r");
    fileB = fopen("b.txt", "w");
    if (fileA == NULL || fileB == NULL) {
        printf("Error opening files.\n");
        exit(EXIT_FAILURE);
    }

    while (fgets(data, sizeof(data), fileA) != NULL) {
        fputs(data, fileB);
    }

    printf("Contents copied from a.txt to b.txt successfully.\n");

    fclose(fileA);
    fclose(fileB);
    return 0;
}
