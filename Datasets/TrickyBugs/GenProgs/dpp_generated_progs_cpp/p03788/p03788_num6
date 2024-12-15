#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;
    
    for (int i = 0; i < K; i++) {
        bool hasChanged = false;
        for (int j = 0; j < N - 1; j++) {
            if (S[j] == 'A' && S[j+1] == 'B') {
                S[j] = 'B';
                S[j+1] = 'A';
                hasChanged = true;
                j++;
            }
        }
        if (!hasChanged) {
            break;
        }
    }
    
    cout << S << endl;
    
    return 0;
}