/*
Task: Develop a program that displays the minimum and maximum limits 
of various integer data types using the <climits>, <limits> library. 
Include int, unsigned int, short, unsigned short, long, and unsigned long.
*/

#include <iostream>
#include <climits>   // For macros defining integer limits
#include <limits>    // For std::numeric_limits

//https://cplusplus.com/reference/climits/
//https://cplusplus.com/reference/limits/numeric_limits/

int main() {
    // Using <climits> macros
    std::cout << "Using <climits> macros:" << std::endl;
    std::cout << "Minimum values:" << std::endl;
    std::cout << "char: " << CHAR_MIN << std::endl;
    std::cout << "short: " << SHRT_MIN << std::endl;
    std::cout << "int: " << INT_MIN << std::endl;
    std::cout << "long: " << LONG_MIN << std::endl;
    std::cout << "long long: " << LLONG_MIN << std::endl;

    std::cout << "\nMaximum values:" << std::endl;
    std::cout << "char: " << CHAR_MAX << std::endl;
    std::cout << "unsigned char: " << UCHAR_MAX << std::endl;
    std::cout << "short: " << SHRT_MAX << std::endl;
    std::cout << "unsigned short: " << USHRT_MAX << std::endl;
    std::cout << "int: " << INT_MAX << std::endl;
    std::cout << "unsigned int: " << UINT_MAX << std::endl;
    std::cout << "long: " << LONG_MAX << std::endl;
    std::cout << "unsigned long: " << ULONG_MAX << std::endl;
    std::cout << "long long: " << LLONG_MAX << std::endl;
    std::cout << "unsigned long long: " << ULLONG_MAX << std::endl;

    // Using std::numeric_limits
    std::cout << "\nUsing std::numeric_limits:" << std::endl;
    std::cout << "Minimum values:" << std::endl;
    std::cout << "char: " << (int)std::numeric_limits<char>::min() << std::endl;
    std::cout << "short: " << std::numeric_limits<short>::min() << std::endl;
    std::cout << "int: " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "long: " << std::numeric_limits<long>::min() << std::endl;
    std::cout << "long long: " << std::numeric_limits<long long>::min() << std::endl;

    std::cout << "\nMaximum values:" << std::endl;
    std::cout << "char: " << (int)std::numeric_limits<char>::max() << std::endl;
    std::cout << "unsigned char: " << std::numeric_limits<unsigned char>::max() << std::endl;
    std::cout << "short: " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "unsigned short: " << std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << "int: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "unsigned int: " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "long: " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "unsigned long: " << std::numeric_limits<unsigned long>::max() << std::endl;
    std::cout << "long long: " << std::numeric_limits<long long>::max() << std::endl;
    std::cout << "unsigned long long: " << std::numeric_limits<unsigned long long>::max() << std::endl;

    return 0;
}
