#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    double x;
    double y;
    double z;
} Vector;

void vector_add(Vector a, Vector b, Vector *result);
void vector_subtract(Vector a, Vector b, Vector *result);
double vector_dot_product(Vector a, Vector b);
void vector_cross_product(Vector a, Vector b, Vector *result);
double vector_magnitude(Vector v);
void vector_normalize(Vector v, Vector *result);
double vector_angle(Vector a, Vector b);
void vector_projection(Vector a, Vector b, Vector *result);

#endif // VECTOR_H