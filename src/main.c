#include <stdio.h>
#include "vector.h"

void print_vector(Vector v) {
    printf("Vector: (%.2f, %.2f, %.2f)\n", v.x, v.y, v.z);
}

void print_menu() {
    printf("=====================================\n");
    printf("          Vector Calculator          \n");
    printf("=====================================\n");
    printf("1.  Add Vectors\n");
    printf("2.  Subtract Vectors\n");
    printf("3.  Dot Product\n");
    printf("4.  Cross Product\n");
    printf("5.  Magnitude of a Vector\n");
    printf("6.  Normalize a Vector\n");
    printf("7.  Angle Between Vectors\n");
    printf("8.  Projection of Vector a onto Vector b\n");
    printf("9.  Perform All Calculations\n");
    printf("10. Scalar Multiplication\n");
    printf("11. Vector Division by Scalar\n");
    printf("12. Exit\n");
    printf("=====================================\n");
    printf("Enter your choice: ");
}

int main() {
    Vector v1, v2, result;
    double dot, magnitude, angle, scalar;
    int choice;

    printf("Enter vector v1 (x y z): ");
    scanf("%lf %lf %lf", &v1.x, &v1.y, &v1.z);

    printf("Enter vector v2 (x y z): ");
    scanf("%lf %lf %lf", &v2.x, &v2.y, &v2.z);

    while (1) 
    {
        print_menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                vector_add(v1, v2, &result);
                printf("Sum: ");
                print_vector(result);
                break;
            case 2:
                vector_subtract(v1, v2, &result);
                printf("Difference: ");
                print_vector(result);
                break;
            case 3:
                dot = vector_dot_product(v1, v2);
                printf("Dot Product: %.2f\n", dot);
                break;
            case 4:
                vector_cross_product(v1, v2, &result);
                printf("Cross Product: ");
                print_vector(result);
                break;
            case 5:
                magnitude = vector_magnitude(v1);
                printf("Magnitude of v1: %.2f\n", magnitude);
                break;
            case 6:
                vector_normalize(v1, &result);
                printf("Normalized v1: ");
                print_vector(result);
                break;
            case 7:
                angle = vector_angle(v1, v2);
                printf("Angle between v1 and v2: %.2f radians\n", angle);
                break;
            case 8:
                vector_projection(v1, v2, &result);
                printf("Projection of v1 onto v2: ");
                print_vector(result);
                break;
            case 9:
                vector_add(v1, v2, &result);
                printf("Sum: ");
                print_vector(result);

                vector_subtract(v1, v2, &result);
                printf("Difference: ");
                print_vector(result);

                dot = vector_dot_product(v1, v2);
                printf("Dot Product: %.2f\n", dot);

                vector_cross_product(v1, v2, &result);
                printf("Cross Product: ");
                print_vector(result);

                magnitude = vector_magnitude(v1);
                printf("Magnitude of v1: %.2f\n", magnitude);

                vector_normalize(v1, &result);
                printf("Normalized v1: ");
                print_vector(result);

                angle = vector_angle(v1, v2);
                printf("Angle between v1 and v2: %.2f radians\n", angle);

                vector_projection(v1, v2, &result);
                printf("Projection of v1 onto v2: ");
                print_vector(result);
                break;
            case 10:
                printf("Enter scalar value: ");
                scanf("%lf", &scalar);
                vector_scalar_multiply(v1, scalar, &result);
                printf("Scalar Multiplication: ");
                print_vector(result);
                break;
            case 11:
                printf("Enter scalar value: ");
                scanf("%lf", &scalar);
                vector_scalar_divide(v1, scalar, &result);
                printf("Vector Division by Scalar: ");
                print_vector(result);
                break;
            case 12:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        
        printf("-------------------------------------\n");
        while (getchar() != '\n'); // Clear the input buffer
    }

    return 0;
}