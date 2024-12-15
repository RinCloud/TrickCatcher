#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#define MOD 1000000007

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(2*N);
    for (int i = 0; i < 2*N; i++) {
        cin >> A[i];
    }

    vector<int> pos;
    for (int i = 0; i < 2*N; i++) {
        if (A[i] == -1) {
            pos.push_back(i);
        }
    }

    int ans = 1;
    int cnt = 0;
    for (int i = 0; i < pos.size(); i++) {
        cnt++;
        ans = (1LL * ans * cnt) % MOD;

        int start = pos[i] + 1;
        while (start < 2*N && A[start] == -1) {
            start++;
        }

        int end = 2*N - 1;
        while (end >= 0 && A[end] == -1) {
            end--;
        }

        if (start < 2*N && A[start] > A[end]) {
            ans = (1LL * ans * (cnt - 1)) % MOD;
        }
    }

    cout << ans << endl;

    return 0;
}