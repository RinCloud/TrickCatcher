#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    if (C % __gcd(A, B) == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}