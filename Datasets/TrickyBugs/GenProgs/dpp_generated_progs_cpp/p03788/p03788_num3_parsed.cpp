#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;
    
    vector<char> state(N);
    for(int i=0; i<N; i++) {
        state[i] = S[i];
    }
    
    int idx = 0;
    while(K > 0) {
        if(idx >= N) {
            break;
        }
        
        if(state[idx] == 'A') {
            if(S[idx] == 'A') {
                state[idx] = 'B';
            } else {
                if(K % 2 == 0) {
                    state[idx] = 'B';
                } else {
                    state[idx] = 'A';
                }
            }
        } else if(state[idx] == 'B') {
            if(S[idx] == 'A') {
                if(K % 2 == 0) {
                    state[idx] = 'A';
                } else {
                    state[idx] = 'B';
                }
            } else {
                state[idx] = 'A';
            }
        }
        
        K--;
        idx++;
    }
    
    for(int i=0; i<N; i++) {
        cout << state[i];
    }
    
    return 0;
}