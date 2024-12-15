#include <iostream>
#include <string>
using namespace std;

bool isMultipleOf9(string n) {
    int sum = 0;
    for (char c : n) {
        sum += (c - '0');
    }
    return sum % 9 == 0;
}

int main() {
    string n;
    cin >> n;
    
    if (isMultipleOf9(n)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}