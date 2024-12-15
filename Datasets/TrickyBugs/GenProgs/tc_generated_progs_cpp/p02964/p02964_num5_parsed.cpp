#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

vector<int> findSequence(int N, ll K, vector<int> A) {
    vector<int> X(N * K);
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < N; j++) {
            X[i * N + j] = A[j];
        }
    }
    
    vector<int> s;
    vector<bool> included(N+1, false);
    for (int i = 0; i < N * K; i++) {
        if (!included[X[i]]) {
            included[X[i]] = true;
            s.push_back(X[i]);
        }
        else {
            while (s.back() != X[i]) {
                included[s.back()] = false;
                s.pop_back();
            }
            s.pop_back();
        }
    }
    
    return s;
}

int main() {
    int N;
    ll K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<int> s = findSequence(N, K, A);
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }
    cout << endl;
    
    return 0;
}
