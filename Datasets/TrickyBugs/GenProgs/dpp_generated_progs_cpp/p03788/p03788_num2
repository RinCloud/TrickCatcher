#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;
    
    for (int i = 0; i < K; i++) {
        if (S[i % N] == 'A') {
            if (S[(i+1) % N] == 'A') {
                S[(i+1) % N] = 'B';
            }
        } else {
            if (S[(i-1) % N] == 'B') {
                S[(i-1) % N] = 'A';
            }
        }
    }
    
    cout << S << endl;
    
    return 0;
}