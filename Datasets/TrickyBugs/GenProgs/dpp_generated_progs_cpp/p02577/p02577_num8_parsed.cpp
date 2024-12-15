#include <iostream>
#include <string>

using namespace std;

bool isMultipleOf9(int N) {
    string str = to_string(N);
    int sum = 0;
    for (char c : str) {
        sum += (c - '0');
    }
    if (sum % 9 == 0) {
        return true;
    }
    return false;
}

int main() {
    int N;
    cin >> N;
    if (isMultipleOf9(N)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}