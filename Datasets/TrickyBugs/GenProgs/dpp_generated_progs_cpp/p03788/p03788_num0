#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;
    
    vector<char> states(N);
    
    // Initializing the states of the devices
    for(int i = 0; i < N; i++) {
        states[i] = S[i];
    }
    
    // Processing K balls
    for(int k = 0; k < K; k++) {
        // Creating a copy of the states to avoid modifying the current states during the iteration
        vector<char> newStates = states;
        for(int i = 0; i < N; i++) {
            if(states[i] == 'A') {
                if(i > 0 && states[i-1] == 'B') {
                    newStates[i] = 'B';
                }
                if(i < N-1 && states[i+1] == 'B') {
                    newStates[i] = 'B';
                }
            }
            else if(states[i] == 'B') {
                if(i > 0 && states[i-1] == 'A') {
                    newStates[i] = 'A';
                }
                if(i < N-1 && states[i+1] == 'A') {
                    newStates[i] = 'A';
                }
            }
        }
        states = newStates;
    }
    
    // Printing the final states
    for(int i = 0; i < N; i++) {
        cout << states[i];
    }
    
    return 0;
}