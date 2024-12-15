#include <iostream>
using namespace std;

int main() {
    int K, X;
    cin >> K >> X;

    if (K * 500 >= X) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}