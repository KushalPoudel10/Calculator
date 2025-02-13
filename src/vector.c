#include "vector.h"
#include <math.h>

// Function Definitions
void vector_add(Vector v1, Vector v2, Vector *result) {
    result->x = v1.x + v2.x;
    result->y = v1.y + v2.y;
    result->z = v1.z + v2.z;
}

void vector_subtract(Vector v1, Vector v2, Vector *result) {
    result->x = v1.x - v2.x;
    result->y = v1.y - v2.y;
    result->z = v1.z - v2.z;
}

double vector_dot_product(Vector v1, Vector v2) {
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

void vector_cross_product(Vector v1, Vector v2, Vector *result) {
    result->x = v1.x * v2.y - v1.y * v2.x;
    result->y = v1.y * v2.z - v1.z * v2.y;
    result->z = v1.z * v2.x - v1.x * v2.z;
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

double vector_angle(Vector v1, Vector v2) {
    double dot = vector_dot_product(v1, v2);
    double magnitude1 = vector_magnitude(v1);
    double magnitude2 = vector_magnitude(v2);
    return acos(dot / (magnitude1 * magnitude2));
}

void vector_projection(Vector v1, Vector v2, Vector *result) {
    double dot = vector_dot_product(v1, v2);
    double magnitude2 = vector_magnitude(v2);
    double scalar = dot / (magnitude2 * magnitude2);
    vector_scalar_multiply(v2, scalar, result);
}

void vector_scalar_multiply(Vector v, double scalar, Vector *result) {
    result->x = v.x * scalar;
    result->y = v.y * scalar;
    result->z = v.z * scalar;
}

void vector_scalar_divide(Vector v, double scalar, Vector *result) {
    result->x = v.x / scalar;
    result->y = v.y / scalar;
    result->z = v.z / scalar;
}