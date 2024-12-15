#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    
    vector<int> prefix_counts(N+1, 0);
    for (int i = 1; i <= N; i++) {
        prefix_counts[i] = prefix_counts[i-1];
        if (S[i-1] == 'A' && S[i] == 'C') {
            prefix_counts[i]++;
        }
    }
    
    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;
        int count = prefix_counts[r-1] - prefix_counts[l-1];
        cout << count << endl;
    }
    
    return 0;
}