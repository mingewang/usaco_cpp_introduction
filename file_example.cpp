#include <bits/stdc++.h>
using namespace std;

int main() {

    int a = 10;

    ifstream fin("a.input");

    ofstream fout("b.output");

    int n;
    int n1;
    float n2;
 
    fin >> n;
    fin >> n1;
    fin >> n2;
    cout << "this is result n: " << n  << "n1 : "  << n1  << " n2: " << n2 << endl;   

    fout << "this is result N: " << n << endl;
    return 0;
}
