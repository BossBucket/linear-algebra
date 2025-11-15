#ifndef LINALG_MATRIX_H
#define LINALG_MATRIX_H


typedef struct {
    int rows;
    int cols;
    double** data;
} Matrix;


Matrix* create_matrix(int rows, int cols);
void free_matrix(Matrix* m);
void print_matrix(Matrix* m);


#endif //LINALG_MATRIX_H