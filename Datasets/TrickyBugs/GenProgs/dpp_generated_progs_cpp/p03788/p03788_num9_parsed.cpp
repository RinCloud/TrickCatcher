#include <iostream>
#include <string>
#include <vector>

using namespace std;

string processBalls(int N, int K, string& S) {
    vector<char> state(N, 'A');
    
    for (int i = 0; i < K; i++) {
        if (S[i % N] == 'A') {
            if (state[i % N] == 'A') {
                state[i % N] = 'B';
            } else {
                state[i % N] = 'A';
            }
        } else {
            if (state[i % N] == 'A') {
                state[i % N] = 'B';
                state[(i + 1) % N] = 'B';
            } else {
                state[i % N] = 'A';
                state[(i - 1 + N) % N] = 'A';
            }
        }
    }
    
    string result(state.begin(), state.end());
    return result;
}

int main() {
    int N, K;
    cin >> N >> K;
    
    string S;
    cin >> S;
    
    string result = processBalls(N, K, S);
    
    cout << result << endl;
    
    return 0;
}