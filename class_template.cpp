#include <iostream>
using namespace std;

template <typename T>
class Box {
private:
    T value;

public:
    Box(T v) : value(v) {}

    T getValue() {
        return value;
    }
};

int main() {
    Box<int> intBox(10);
    Box<double> doubleBox(5.5);

    cout << "Integer Box: " << intBox.getValue() << endl;
    cout << "Double Box: " << doubleBox.getValue() << endl;

    return 0;
}