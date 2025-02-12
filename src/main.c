#include <stdio.h>
#include "vector.h"

void print_vector(Vector v) {
    printf("Vector: (%.2f, %.2f, %.2f)\n", v.x, v.y, v.z);
}

void print_menu() {
    printf("=====================================\n");
    printf(" Vector Calculator\n");
    printf("=====================================\n");
    printf("1. Add Vectors\n");
    printf("2. Subtract Vectors\n");
    printf("3. Dot Product\n");
    printf("4. Cross Product\n");
    printf("5. Perform All Calculations\n");
    printf("6. Exit\n");
    printf("=====================================\n");
    printf("Enter your choice: ");
}

int main() {
    Vector v1, v2, sum, diff, cross;
    double dot;
    int choice;

    printf("Enter vector v1 (x y z): ");
    scanf("%lf %lf %lf", &v1.x, &v1.y, &v1.z);

    printf("Enter vector v2 (x y z): ");
    scanf("%lf %lf %lf", &v2.x, &v2.y, &v2.z);

    while (1) {
        print_menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                vector_add(v1, v2, &sum);
                printf("Sum: ");
                print_vector(sum);
                break;
            case 2:
                vector_subtract(v1, v2, &diff);
                printf("Difference: ");
                print_vector(diff);
                break;
            case 3:
                dot = vector_dot_product(v1, v2);
                printf("Dot Product: %.2f\n", dot);
                break;
            case 4:
                vector_cross_product(v1, v2, &cross);
                printf("Cross Product: ");
                print_vector(cross);
                break;
            case 5:
                vector_add(v1, v2, &sum);
                vector_subtract(v1, v2, &diff);
                dot = vector_dot_product(v1, v2);
                vector_cross_product(v1, v2, &cross);

                printf("v1: ");
                print_vector(v1);
                printf("v2: ");
                print_vector(v2);
                printf("Sum: ");
                print_vector(sum);
                printf("Difference: ");
                print_vector(diff);
                printf("Dot Product: %.2f\n", dot);
                printf("Cross Product: ");
                print_vector(cross);
                break;
            case 6:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        printf("-------------------------------------\n");
    }

    return 0;
}