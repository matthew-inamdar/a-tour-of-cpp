#include <iostream>

class Vector {
public:
    Vector(int s) : elem{new double[s]}, sz{s} {}

    ~Vector() {
        delete[] elem;
    }

    double &operator[](int i) {
        return elem[i];
    }

    int size() {
        return sz;
    }

private:
    double *elem;
    int sz;
};

int main() {
    Vector v(6);
    std::cout << "Size: " << v.size() << std::endl;
    std::cout << "[0]: " << v[0] << std::endl;

    return 0;
}
