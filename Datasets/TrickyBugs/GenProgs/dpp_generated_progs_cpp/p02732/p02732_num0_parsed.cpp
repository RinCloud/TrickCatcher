#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    unordered_map<int, int> count;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        count[A[i]]++;
    }

    for (int k = 0; k < N; k++) {
        int ans = 0;
        count[A[k]]--;

        for (auto& it : count) {
            ans += it.second * (it.second - 1) / 2;
        }

        count[A[k]]++;
        cout << ans << endl;
    }

    return 0;
}
