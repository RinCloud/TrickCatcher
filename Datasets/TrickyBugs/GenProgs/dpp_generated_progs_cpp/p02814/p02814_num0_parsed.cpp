#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int countSemiCommonMultiples(vector<int> A, int M) {
    unordered_set<int> s;
    for (int i = 0; i < A.size(); i++) {
        int ak = A[i];
        for (int p = 0; ak * (p + 0.5) <= M; p++) {
            int x = ak * (p + 0.5);
            s.insert(x);
        }
    }
    return s.size();
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cout << countSemiCommonMultiples(A, M) << endl;
    return 0;
}