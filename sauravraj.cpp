#include <stdio.h>
#include <string.h>

// Address structure
struct Address {
    char houseNo[20];
    char street[50];
    char city[50];
    char state[30];
    char pinCode[10];
};

// Employee structure
struct Employee {
    char name[50];
    char department[30];
    struct Address empAddress;
    double salary;
};

int main() {
    int n = 100; // Number of employees
    struct Employee employees[n];

    printf("Enter details for %d employees:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("\nEmployee %d:\n", i + 1);

        // Name
        printf("Name: ");
        scanf("%s", employees[i].name);

        // Department
        printf("Department: ");
        scanf("%s", employees[i].department);

        // Address
        printf("Address:\n");
        printf("House No: ");
        scanf("%s", employees[i].empAddress.houseNo);
        printf("Street: ");
        scanf("%s", employees[i].empAddress.street);
        printf("City: ");
        scanf("%s", employees[i].empAddress.city);
        printf("State: ");
        scanf("%s", employees[i].empAddress.state);
        printf("Pin Code: ");
        scanf("%s", employees[i].empAddress.pinCode);

        // Salary
        printf("Salary: ");
        scanf("%lf", &employees[i].salary);
    }

    // Print details for Mechanical department employees
    printf("\nMechanical Department Employees:\n");
    for (int i = 0; i < n; ++i) {
        if (strcmp(employees[i].department, "Mechanical") == 0) {
            printf("Name: %s\n", employees[i].name);
            printf("Address: %s, %s, %s, %s - %s\n", employees[i].empAddress.houseNo,
                   employees[i].empAddress.street, employees[i].empAddress.city,
                   employees[i].empAddress.state, employees[i].empAddress.pinCode);
            printf("Salary: %.2lf\n\n", employees[i].salary);
        }
    }

    return 0;
}
