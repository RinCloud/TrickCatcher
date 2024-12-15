#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isSquareNumber(string concat) {
    long long num = stoll(concat);
    long long squareRoot = sqrt(num);
    return (squareRoot * squareRoot == num);
}

int main() {
    int a, b;
    cin >> a >> b;
    string concat = to_string(a) + to_string(b);
    if (isSquareNumber(concat)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}