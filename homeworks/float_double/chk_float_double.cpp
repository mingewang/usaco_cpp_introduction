//#include <iostream>
//#include <iomanip>

#include <bits/stdc++.h>

int main() {
    float floatSum = 0.0f;
    double doubleSum = 0.0;

    for (int i = 0; i < 10; ++i) {
        floatSum += 0.1f;
        doubleSum += 0.1;
    }

    std::cout << std::fixed << std::setprecision(10);
    std::cout << "Sum using float: " << floatSum << std::endl;
    std::cout << "Sum using double: " << doubleSum << std::endl;

    return 0;
}
