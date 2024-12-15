#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    bool possible = false;
    
    for (int i = 1; i <= 9; i++) {
        if (N % i == 0 && N / i >= 1 && N / i <= 9) {
            possible = true;
            break;
        }
    }
    
    if (possible) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}