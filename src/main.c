#include <stdio.h>
#include "vector.h"

void print_vector(Vector v) {
    printf("Vector: (%.2f, %.2f, %.2f)\n", v.x, v.y, v.z);
}

int main() {
    Vector v1, v2, sum, diff, cross;
    double dot;

    printf("Enter vector v1 (x y z): ");
    scanf("%lf %lf %lf", &v1.x, &v1.y, &v1.z);

    printf("Enter vector v2 (x y z): ");
    scanf("%lf %lf %lf", &v2.x, &v2.y, &v2.z);

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

    return 0;
}