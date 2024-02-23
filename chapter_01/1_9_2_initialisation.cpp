#include <iostream>

using namespace std;

int main()
{
    int x;
    int& r{x};

    // r is uninitialised and contains arbitrary bits left over at the memory
    // address allocated.
    cout << "Value: " << r << endl;

    r = 1;

    cout << "Value: " << r << endl;

    return 0;
}
