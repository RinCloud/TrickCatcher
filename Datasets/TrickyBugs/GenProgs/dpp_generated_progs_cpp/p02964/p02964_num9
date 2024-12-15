#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    unordered_set<int> s;
    vector<int> result;

    for (int i = 0; i < N * K; i++) {
        int x = i / N;

        if (s.count(A[i % N])) {
            while (result.back() != A[i % N]) {
                s.erase(result.back());
                result.pop_back();
            }
            result.pop_back();
        } else {
            s.insert(A[i % N]);
            result.push_back(A[i % N]);
        }
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}