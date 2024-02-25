#include <iostream>

using namespace std;

enum class Color {
    red,
    blue,
    green,
};

enum class Traffic_light {
    green,
    amber,
    red,
};

Traffic_light &operator++(Traffic_light &t) {
    switch (t) {
        case Traffic_light::green:
            return t = Traffic_light::amber;
        case Traffic_light::amber:
            return t = Traffic_light::red;
        case Traffic_light::red:
            return t = Traffic_light::green;
    }
}

int main() {
    Color c1 = Color::red;
    Color c2{Color::blue};

    Traffic_light light1 = Traffic_light::red;
    auto light2{Traffic_light::amber};

    cout << "Color 1: " << int(c1) << endl;
    cout << "Color 2: " << int(c2) << endl;
    cout << "Traffic light 1: " << int(light1) << endl;
    cout << "Traffic light 2: " << int(light2) << endl;

    cout << endl;

    auto signal{Traffic_light::red};
    cout << "Signal: " << int(signal) << endl;

    Traffic_light next = ++signal;
    cout << "Signal: " << int(signal) << endl;
    cout << "Next Signal: " << int(next) << endl;

    return 0;
}
