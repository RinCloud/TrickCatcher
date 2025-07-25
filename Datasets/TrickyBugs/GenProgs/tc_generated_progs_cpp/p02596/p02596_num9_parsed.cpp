#include<bits/stdc++.h>
using namespace std;

int main() {
    int K;
    cin >> K;
    
    int remainders[K];
    int currentRemainder = 0;
    
    for (int i = 0; i < K; i++) {
        currentRemainder = (currentRemainder * 10 + 7) % K;
        
        if (currentRemainder == 0) {
            cout << (i + 1) << endl;
            return 0;
        }
        
        if (remainders[currentRemainder] != 0) {
            cout << -1 << endl;
            return 0;
        }
        
        remainders[currentRemainder] = i + 1;
    }
    
    cout << -1 << endl;
    return 0;
}
