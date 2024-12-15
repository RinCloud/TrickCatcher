#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, Q;
vector<int> a, b, c, d;

int calculateScore(const vector<int>& A) {
    int score = 0;
    for (int i = 0; i < Q; i++) {
        if (A[b[i]] - A[a[i]] == c[i]) {
            score += d[i];
        }
    }
    return score;
}

int recursiveSearch(vector<int>& A, int lastValue) {
    if (A.size() == N) {
        return calculateScore(A);
    }
    
    int maxValue = 0;
    for (int value = lastValue; value <= M; value++) {
        A.push_back(value);
        maxValue = max(maxValue, recursiveSearch(A, value));
        A.pop_back();
    }
    
    return maxValue;
}

int main() {
    cin >> N >> M >> Q;
    
    a.resize(Q);
    b.resize(Q);
    c.resize(Q);
    d.resize(Q);
    
    for (int i = 0; i < Q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    
    vector<int> A;
    int answer = recursiveSearch(A, 1);
    
    cout << answer << endl;
    
    return 0;
}