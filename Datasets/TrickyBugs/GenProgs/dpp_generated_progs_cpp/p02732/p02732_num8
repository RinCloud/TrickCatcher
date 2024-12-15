#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    map<int, int> freq;
    for (int i = 0; i < N; i++) {
        freq[A[i]]++;
    }

    for (int k = 0; k < N; k++) {
        int ans = (N - 1) - (freq[A[k]] - 1);
        cout << ans << endl;
    }

    return 0;
}