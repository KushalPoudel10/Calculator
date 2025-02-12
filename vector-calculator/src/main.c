#include <stdio.h>
#include "vector.h"

int main() {
    int choice;
    Vector v1, v2, result;

    printf("Vector Calculator\n");
    printf("1. Add Vectors\n");
    printf("2. Subtract Vectors\n");
    printf("3. Dot Product\n");
    printf("4. Cross Product\n");
    printf("5. Exit\n");

    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            break;
        }

        printf("Enter the components of vector 1 (x y z): ");
        scanf("%f %f %f", &v1.x, &v1.y, &v1.z);
        printf("Enter the components of vector 2 (x y z): ");
        scanf("%f %f %f", &v2.x, &v2.y, &v2.z);

        switch (choice) {
            case 1:
                result = add_vectors(v1, v2);
                printf("Result: (%.2f, %.2f, %.2f)\n", result.x, result.y, result.z);
                break;
            case 2:
                result = subtract_vectors(v1, v2);
                printf("Result: (%.2f, %.2f, %.2f)\n", result.x, result.y, result.z);
                break;
            case 3:
                printf("Dot Product: %.2f\n", dot_product(v1, v2));
                break;
            case 4:
                result = cross_product(v1, v2);
                printf("Result: (%.2f, %.2f, %.2f)\n", result.x, result.y, result.z);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}