#include <iostream>

struct Vector {
    double *elem; // Pointer to the first element in a dynamic array of doubles.
    int size;     // The size of the array.
};

void vector_init(Vector& v, int s);

int main() {
    Vector v;
    vector_init(v, 2);

    delete[] v.elem;

    return 0;
}

void vector_init(Vector& v, int s) {
    v.elem = new double[s];
    v.size = s;
}
