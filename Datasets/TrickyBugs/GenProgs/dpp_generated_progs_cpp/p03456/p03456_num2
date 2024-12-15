#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isSquare(long long n) {
    long long root = sqrt(n);
    return (root * root == n);
}

int main() {
    int a, b;
    cin >> a >> b;
    
    string ab = to_string(a) + to_string(b);
    
    long long abNum = stoll(ab);
    
    if (isSquare(abNum)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}