#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Addition of integers: " << add(5, 10) << endl;
    cout << "Addition of doubles: " << add(3.5, 2.7) << endl;
    return 0;
}