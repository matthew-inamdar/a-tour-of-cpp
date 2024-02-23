#include <iostream>
#include <memory>

std::unique_ptr<int> getPointer()
{
    auto ptr = std::make_unique<int>(42);
    return ptr;
}

int* printPointer()
{
    auto ptr = getPointer();

    std::cout << "smart pointer address: " << &ptr << std::endl;
    std::cout << "smart pointer value address: " << ptr << std::endl;
    std::cout << "smart pointer value: " << *ptr << std::endl;

    // This erroneously points to the value on the stack which will be
    // deallocated at the end of this function.
    return ptr.get();
}

int main()
{
    auto ptr = printPointer();

    std::cout << "raw pointer address: " << &ptr << std::endl;
    std::cout << "raw pointer value address: " << ptr << std::endl;
    std::cout << "raw pointer value: " << *ptr << std::endl;

    return 0;
}
