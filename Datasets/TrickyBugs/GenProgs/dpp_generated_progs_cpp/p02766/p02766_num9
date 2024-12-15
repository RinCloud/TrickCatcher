#include <iostream>
using namespace std;

int countDigits(int N, int K) {
    int count = 0;
    while (N > 0) {
        count++;
        N /= K;
    }
    return count;
}

int main() {
    int N, K;
    cin >> N >> K;
    
    int result = countDigits(N, K);
    cout << result << endl;
    
    return 0;
}