#include <stdio.h>
#include "vector.h"

void add_vectors(Vector a, Vector b, Vector *result) {
    result->x = a.x + b.x;
    result->y = a.y + b.y;
    result->z = a.z + b.z;
}

void subtract_vectors(Vector a, Vector b, Vector *result) {
    result->x = a.x - b.x;
    result->y = a.y - b.y;
    result->z = a.z - b.z;
}

double dot_product(Vector a, Vector b) {
    return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
}

void cross_product(Vector a, Vector b, Vector *result) {
    result->x = (a.y * b.z) - (a.z * b.y);
    result->y = (a.z * b.x) - (a.x * b.z);
    result->z = (a.x * b.y) - (a.y * b.x);
}