#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> cnt(M, 0);
    cnt[0] = 1;
    int sum = 0;
    long long answer = 0;

    for (int i = 0; i < N; i++) {
        sum = (sum + A[i]) % M;
        answer += cnt[sum];
        cnt[sum]++;
    }

    cout << answer << endl;

    return 0;
}