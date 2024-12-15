#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool isSquareNumber(int num) {
    int sqRoot = sqrt(num);
    return (sqRoot * sqRoot == num);
}

int main() {
    int a, b;
    cin >> a >> b;

    string concat = to_string(a) + to_string(b);
    int concatenatedNum = stoi(concat);

    if (isSquareNumber(concatenatedNum)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}