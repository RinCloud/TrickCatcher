#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    unordered_set<int> s;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    for (int i = 0; i < N * K; i++) {
        if (s.count(A[i % N]) == 0) {
            s.insert(A[i % N]);
        } else {
            while (!s.empty() && *s.rbegin() != A[i % N]) {
                s.erase(*s.rbegin());
            }
            if (!s.empty()) {
                s.erase(*s.rbegin());
            }
        }
    }
    
    for (int x : s) {
        cout << x << " ";
    }
    
    return 0;
}