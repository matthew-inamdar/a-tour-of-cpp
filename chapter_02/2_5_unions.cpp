#include <iostream>

using ScalarVariant = std::variant<int, bool, std::string>;

void printVariant(ScalarVariant v) {
    if (std::holds_alternative<int>(v))
        std::cout << "Integer: " << std::get<int>(v) << std::endl;
    else if (std::holds_alternative<bool>(v))
        std::cout << "Boolean: " << std::get<bool>(v) << std::endl;
    else if (std::holds_alternative<std::string>(v))
        std::cout << "String: " << std::get<std::string>(v) << std::endl;
}

int main() {
    ScalarVariant v{"Hello, World!"};
    printVariant(v);

    v = 24;
    printVariant(v);

    v = true;
    printVariant(v);

    return 0;
}
