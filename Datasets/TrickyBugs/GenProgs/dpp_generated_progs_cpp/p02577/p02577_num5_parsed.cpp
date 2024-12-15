#include <iostream>
#include <string>

using namespace std;

int main() {
    string N;
    cin >> N;

    int sum = 0;
    for (char c : N) {
        sum += c - '0';
    }

    if (sum % 9 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}