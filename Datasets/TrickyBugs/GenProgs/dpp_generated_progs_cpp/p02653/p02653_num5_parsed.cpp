#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> num_strings(N + 1);
    num_strings[0] = 1;

    for (int i = A; i <= N; ++i) {
        num_strings[i] = (num_strings[i] + num_strings[i - A]) % MOD;
    }

    for (int j = B; j <= N; ++j) {
        num_strings[j] = (num_strings[j] + num_strings[j - B]) % MOD;
    }

    cout << num_strings[N] << endl;

    return 0;
}