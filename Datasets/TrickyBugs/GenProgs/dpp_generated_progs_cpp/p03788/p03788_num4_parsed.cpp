#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;
  
    for(int k=0; k<K; k++) {
        string newS = S;
        for(int i=0; i<N; i++) {
            if(S[i] == 'A') {
                newS[i] = (i > 0 && S[i-1] == 'B') || (i < N-1 && S[i+1] == 'B') ? 'B' : 'A';
            }
            else {
                newS[i] = (i > 0 && S[i-1] == 'A') || (i < N-1 && S[i+1] == 'A') ? 'A' : 'B';
            }
        }
        S = newS;
    }
  
    cout << S << endl;
  
    return 0;
}
