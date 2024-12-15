#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    // Check if A and C can communicate directly
    if (abs(a - c) <= d) {
        cout << "Yes" << endl;
        return 0;
    }
    
    // Check if A and B can communicate directly, and B and C can communicate directly
    if ((abs(a - b) <= d) && (abs(b - c) <= d)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}