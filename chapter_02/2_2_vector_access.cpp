#include <iostream>

struct Vector {
    int size;
    char c;
};

void vector_access(Vector vv, Vector& vr, Vector* vp) {
    std::cout << "value: " << vv.size << std::endl;
    std::cout << "reference: " << vr.size << std::endl;
    std::cout << "pointer: " << vp->size << std::endl;
}

int main() {
    Vector v{
        .size = 1,
        .c = 's',
    };
    vector_access(v, v, &v);

    return 0;
}
