#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    double x, y, z;
} Vector;

void vector_add(Vector v1, Vector v2, Vector *result);
void vector_subtract(Vector v1, Vector v2, Vector *result);
double vector_dot_product(Vector v1, Vector v2);
void vector_cross_product(Vector v1, Vector v2, Vector *result);
double vector_magnitude(Vector v);
void vector_normalize(Vector v, Vector *result);
double vector_angle(Vector v1, Vector v2);
void vector_projection(Vector v1, Vector v2, Vector *result);
void vector_scalar_multiply(Vector v, double scalar, Vector *result);
void vector_scalar_divide(Vector v, double scalar, Vector *result);

#endif // VECTOR_H