#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    
    string S;
    cin >> S;
    
    // Pre-compute the count of "AC" for each prefix of string S
    vector<int> acCount(N+1);
    for(int i=1; i<=N; i++) {
        acCount[i] = acCount[i-1];
        if(S[i-1] == 'A' && S[i] == 'C') {
            acCount[i]++;
        }
    }
    
    // Answer the queries
    for(int i=0; i<Q; i++) {
        int l, r;
        cin >> l >> r;
        
        // Count the occurrences of "AC" in the substring S[l-1:r-1]
        int numAC = acCount[r-1] - acCount[l-1];
        cout << numAC << endl;
    }
    
    return 0;
}