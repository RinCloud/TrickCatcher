#include <iostream>
using namespace std;

int main() {
    int K;
    cin >> K;
    
    long long int num = 7;
    for (int i = 1; i <= K; i++) {
        if (num % K == 0) {
            cout << i << endl;
            return 0;
        }
        num = (num * 10 + 7) % K;
    }
    
    cout << -1 << endl;
    
    return 0;
}