#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    unordered_set<int> s;
    vector<int> res;
    
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < N; j++) {
            int X = A[j];
            if (s.count(X) == 0) {
                s.insert(X);
                res.push_back(X);
            } else {
                while (res.back() != X) {
                    s.erase(res.back());
                    res.pop_back();
                }
                s.erase(res.back());
                res.pop_back();
            }
        }
    }
    
    for (int x : res) {
        cout << x << " ";
    }
    
    return 0;
}