#include <stdio.h>
#include <stdlib.h>

// Structure for a polynomial term
struct Node {
    int coeff;
    int exp;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int coeff, int exp) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a term in the polynomial
void insertNode(struct Node** poly, int coeff, int exp) {
    struct Node* newNode = createNode(coeff, exp);
    if (*poly == NULL) {
        *poly = newNode;
    } else {
        struct Node* temp = *poly;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to display a polynomial
void display(struct Node* poly) {
    while (poly != NULL) {
        printf("%dx^%d", poly->coeff, poly->exp);
        poly = poly->next;
        if (poly != NULL)
            printf(" + ");
    }
    printf("\n");
}

// Function to add two polynomials
struct Node* addPolynomials(struct Node* p1, struct Node* p2) {
    struct Node* result = NULL;
    while (p1 != NULL || p2 != NULL) {
        int coeff, exp;
        if (p1 == NULL) {
            coeff = p2->coeff;
            exp = p2->exp;
            p2 = p2->next;
        } else if (p2 == NULL) {
            coeff = p1->coeff;
            exp = p1->exp;
            p1 = p1->next;
        } else if (p1->exp == p2->exp) {
            coeff = p1->coeff + p2->coeff;
            exp = p1->exp;
            p1 = p1->next;
            p2 = p2->next;
        } else if (p1->exp > p2->exp) {
            coeff = p1->coeff;
            exp = p1->exp;
            p1 = p1->next;
        } else {
            coeff = p2->coeff;
            exp = p2->exp;
            p2 = p2->next;
        }
        insertNode(&result, coeff, exp);
    }
    return result;
}

// Function to multiply two polynomials
struct Node* multiplyPolynomials(struct Node* p1, struct Node* p2) {
    struct Node* result = NULL;
    
    for (struct Node* temp1 = p1; temp1 != NULL; temp1 = temp1->next) {
        for (struct Node* temp2 = p2; temp2 != NULL; temp2 = temp2->next) {
            insertNode(&result, temp1->coeff * temp2->coeff, temp1->exp + temp2->exp);
        }
    }
    return result;
}

// Main function
int main() {
    struct Node *poly1 = NULL, *poly2 = NULL, *s    um = NULL, *product = NULL;
    int n, coeff, exp;

    // Input first polynomial
    printf("Enter number of terms in first polynomial: ");
    scanf("%d", &n);
    printf("Enter terms (coefficient exponent):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &coeff, &exp);
        insertNode(&poly1, coeff, exp);
    }

    // Input second polynomial
    printf("Enter number of terms in second polynomial: ");
    scanf("%d", &n);
    printf("Enter terms (coefficient exponent):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &coeff, &exp);
        insertNode(&poly2, coeff, exp);
    }

    // Display polynomials
    printf("\nFirst Polynomial: ");
    display(poly1);
    printf("Second Polynomial: ");
    display(poly2);

    // Perform addition and multiplication
    sum = addPolynomials(poly1, poly2);
    printf("\nSum: ");
    display(sum);

    product = multiplyPolynomials(poly1, poly2);
    printf("Product: ");
    display(product);

    return 0;
}
