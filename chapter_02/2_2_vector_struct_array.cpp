#include <iostream>

struct Vector2D {
    // This is a static array and the size must be known at compile time.
    double elem[2];
};

void vector_init(Vector2D& v);

int main() {
    // "new" allocates this on the heap.
    Vector2D* v = new Vector2D;
    vector_init(*v);

    // "delete" deallocates this from the heap.
    delete v;

    return 0;
}

void vector_init(Vector2D& v) {
    v.elem[0] = 12;
    v.elem[1] = 24;
}
