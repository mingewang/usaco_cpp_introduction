// Normally use cin/cout for input/output in USACO
// Details at https://usaco.guide/general/input-output?lang=cpp
#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}


// iterative method
int fib2(int n)
{
    if( n <= 0 ) {
        return 0;
    }
    else if (n == 1 ) {
        return 1;
    }

    int prev = 0;
    int  current = 1;
    for( int i = 2; i < n+1; ++i) {
        // f(n) = f(n-2) + f(n-1)
        int sum = prev + current;
        prev = current;
        current = sum; 
    }

    return current;
}


int main() {
	// your code goes here, readn n = 4
    std::string input;
    std::getline(std::cin, input);  // Read entire line from input

    char equalSign;
    int n;
    std::istringstream iss(input);
    std::string var;
    iss >> var >> equalSign >> n;  // Extract "n", "=", and "2"
 
    cout << " n is: " << n << endl;

    cout << fib(n) << endl;
  
	return 0;
}