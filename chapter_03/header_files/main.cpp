#include <iostream>
#include "vector.hpp"

int main() {
    Vector v(2);

    v[0] = 21;
    v[1] = 98;

    std::cout << "(X,Y) = (" << v[0] << "," << v[1] << ")" << std::endl;

    return 0;
}
