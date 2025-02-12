#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    double x;
    double y;
    double z;
} Vector;

Vector add_vectors(Vector a, Vector b);
Vector subtract_vectors(Vector a, Vector b);
double dot_product(Vector a, Vector b);
Vector cross_product(Vector a, Vector b);

#endif // VECTOR_H