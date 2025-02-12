#include <math.h>
#include "vector.h"

void vector_add(Vector a, Vector b, Vector *result) {
    result->x = a.x + b.x;
    result->y = a.y + b.y;
    result->z = a.z + b.z;
}

void vector_subtract(Vector a, Vector b, Vector *result) {
    result->x = a.x - b.x;
    result->y = a.y - b.y;
    result->z = a.z - b.z;
}

double vector_dot_product(Vector a, Vector b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

void vector_cross_product(Vector a, Vector b, Vector *result) {
    result->x = a.y * b.z - a.z * b.y;
    result->y = a.z * b.x - a.x * b.z;
    result->z = a.x * b.y - a.y * b.x;
}

double vector_magnitude(Vector v) {
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

void vector_normalize(Vector v, Vector *result) {
    double magnitude = vector_magnitude(v);
    result->x = v.x / magnitude;
    result->y = v.y / magnitude;
    result->z = v.z / magnitude;
}

double vector_angle(Vector a, Vector b) {
    double dot = vector_dot_product(a, b);
    double mag_a = vector_magnitude(a);
    double mag_b = vector_magnitude(b);
    return acos(dot / (mag_a * mag_b));
}

void vector_projection(Vector a, Vector b, Vector *result) {
    double dot = vector_dot_product(a, b);
    double mag_b_squared = vector_dot_product(b, b);
    double scale = dot / mag_b_squared;
    result->x = b.x * scale;
    result->y = b.y * scale;
    result->z = b.z * scale;
}