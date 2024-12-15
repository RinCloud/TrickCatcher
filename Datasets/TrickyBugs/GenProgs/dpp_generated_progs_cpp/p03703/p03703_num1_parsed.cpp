#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    long long count = 0;

    for (int i = 0; i < N; i++) {
        long long sum = 0;
        for (int j = i; j < N; j++) {
            sum += a[j];
            long long mean = sum / (j - i + 1);
            if (mean >= K) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}