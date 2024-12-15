#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;

    long long score = 1;
    for (int i = 2; i <= N; i++) {
        score = (score * i) % MOD;
    }
    cout << score << endl;

    return 0;
}