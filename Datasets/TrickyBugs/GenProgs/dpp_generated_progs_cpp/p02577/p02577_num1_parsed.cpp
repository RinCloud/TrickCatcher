#include <iostream>
#include <string>

using namespace std;

bool isMultipleOfNine(string n) {
    int sum = 0;
    for (char c : n) {
        sum += c - '0';
    }
    return (sum % 9 == 0);
}

int main() {
    string n;
    cin >> n;

    if (isMultipleOfNine(n)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}