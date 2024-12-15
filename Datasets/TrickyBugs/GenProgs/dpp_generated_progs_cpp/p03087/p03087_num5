#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    
    string S;
    cin >> S;
    
    vector<int> prefixCount(N+1, 0);
    for (int i = 1; i <= N; i++) {
        prefixCount[i] = prefixCount[i-1] + (S[i-1] == 'A' && S[i] == 'C');
    }
    
    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;
        
        // The number of times 'AC' occurs in the substring from l to r is equal to the number of times
        // 'AC' occurs in the substring from 1 to r minus the number of times it occurs in the substring from 1 to l-1.
        int count = prefixCount[r] - prefixCount[l-1];
        cout << count << endl;
    }
    
    return 0;
}