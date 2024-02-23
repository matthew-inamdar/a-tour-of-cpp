#include <iostream>

using namespace std;

int main()
{
    cout << "What do you want to say to the world?" << endl;

    string userInput;
    getline(cin, userInput);

    for (const char c : userInput)
        cout << "Char: " << c << endl;

    return 0;
}
