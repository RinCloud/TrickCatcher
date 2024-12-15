#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    
    vector<int> A(2 * (int)1e9 + 1, 0);
    int P = 0;
    long long ans = 0;
    
    unordered_map<int, int> freq;
    freq[0] = 1;
    
    for(int i = 0; i < N; i++) {
        if(S[i] == '+') {
            A[P]++;
        }
        else if(S[i] == '-') {
            A[P]--;
        }
        else if(S[i] == '>') {
            P++;
        }
        else {
            P--;
        }
        
        ans += freq[P - A[P]];
        freq[P - A[P]]++;
    }
    
    cout << ans << endl;
    
    return 0;
}