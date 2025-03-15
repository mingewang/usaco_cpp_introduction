#include <bits/stdc++.h>

using namespace std;

void increment_by_value(int num) {
    num++;
    cout << "Inside function: " << num << endl;
}

void increment_by_reference(int& num) {
    num++;
    cout << "Inside function: " << num << endl;
}

void increment_by_pointer(int* num) {
    (*num)++;
    cout << "Inside function: " << *num << endl;
}

int main() {
    int value = 5;
    increment_by_value(value);
    cout << "Outside function1: " << value << endl;
    increment_by_reference(value);
    cout << "Outside function 2: " << value << endl;
    increment_by_pointer(&value);
    cout << "Outside function 3: " << value << endl;
    return 0;
}