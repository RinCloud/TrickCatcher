#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    unordered_map<int, int> freq;
    freq[0] = 1;
    int sum = 0;
    long long count = 0;
    for (int i = 0; i < N; i++) {
        sum = (sum + A[i]) % M;
        count += freq[sum];
        freq[sum]++;
    }

    cout << count << endl;

    return 0;
}