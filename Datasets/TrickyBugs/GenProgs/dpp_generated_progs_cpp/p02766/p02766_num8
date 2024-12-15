#include <iostream>
using namespace std;

int findNumDigits(int N, int K) {
    int count = 0;
    
    while (N > 0) {
        N /= K;
        count++;
    }
    
    return count;
}

int main() {
    int N, K;
    cin >> N >> K;
    
    int numDigits = findNumDigits(N, K);
    
    cout << numDigits << endl;
    
    return 0;
}