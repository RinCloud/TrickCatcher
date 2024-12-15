#include<iostream>
#include<string>

using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;
    
    string state = S;
    for(int i = 0; i < K; i++) {
        if(state[i % N] == 'A') {
            if(S[(i+1) % N] == 'A') {
                state[(i+1) % N] = 'A';
            } else {
                state[(i+1) % N] = 'B';
            }
        } else {
            if(S[i % N] == 'A') {
                state[i % N] = 'A';
            } else {
                state[i % N] = 'B';
            }
        }
    }
    cout << state << endl;
    
    return 0;
}