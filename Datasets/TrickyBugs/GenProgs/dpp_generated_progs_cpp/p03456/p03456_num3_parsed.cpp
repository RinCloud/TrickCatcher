#include <iostream>
#include <cmath>
using namespace std;

bool isSquareNumber(int num) {
    int root = sqrt(num);
    return (root * root == num);
}

int main() {
    int a, b;
    cin >> a >> b;

    int concatenatedNum = stoi(to_string(a) + to_string(b));
    if (isSquareNumber(concatenatedNum)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
