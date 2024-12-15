#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int maxDivisible = N;
    for (int i = N; i >= 1; i--) {
        if (i % 2 == 0 && i % maxDivisible == 0) {
            maxDivisible = i;
        }
    }
    
    cout << maxDivisible << endl;
    
    return 0;
}