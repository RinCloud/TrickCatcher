#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<pair<int, int>> BC(M);
    for (int i = 0; i < M; i++) {
        cin >> BC[i].first >> BC[i].second;
    }

    sort(BC.rbegin(), BC.rend());

    int idx = 0;
    for (int i = 0; i < M && idx < N; i++) {
        int b = BC[i].first;
        int c = BC[i].second;

        while (b > 0 && idx < N && A[idx] < c) {
            A[idx++] = c;
            b--;
        }
    }

    long long sum = 0;
    for (const auto& a : A) {
        sum += a;
    }
    
    cout << sum << endl;

    return 0;
}