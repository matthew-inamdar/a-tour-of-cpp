#include <iostream>

using namespace std;

int main()
{
    cout << "Do you want to know the secret of the universe? [Y/n]" << endl;

    char userInput;
    cin >> userInput;

    bool answer;
    switch (userInput) {
        case 'Y':
            cout << "Y provided" << endl;
        case 'y':
            cout << "y provided" << endl;
            answer = true;
            break;
        case 'N':
            cout << "N provided" << endl;
        case 'n':
            cout << "n provided" << endl;
            answer = false;
            break;
        default:
            cout << "Unknown option: " << userInput << endl;
            return 1;
    }

    if (answer)
        cout << "42" << endl;
    else
        cout << ":frowning_face:" << endl;

    return 0;
}
