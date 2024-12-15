#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    vector<int> consecutive(S.length() + 1, 0);
    for (int i = 1; i <= N; i++) {
        consecutive[i] = consecutive[i - 1] + (S[i - 1] == '1');
    }

    int maxConsecutive = consecutive[min(K, N)];
    for (int i = 1; i <= N - K; i++) {
        maxConsecutive = max(maxConsecutive, consecutive[i + K] - consecutive[i - 1]);
    }

    cout << maxConsecutive << endl;

    return 0;
}