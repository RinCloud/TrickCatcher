#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    vector<int> A(2e9 + 1);
    int P = 0;
    A[P] = 1;

    unordered_map<int, int> counts;
    counts[0] = 1;

    long long ans = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == '+') {
            A[P]++;
        } else if (S[i] == '-') {
            A[P]--;
        } else if (S[i] == '>') {
            P++;
            if (A[P] == 0) {
                counts[P] = 1;
            } else {
                counts[P] = A[P];
            }
        } else if (S[i] == '<') {
            if (A[P] == 0) {
                ans += counts[P];
            } else {
                A[P]--;
                ans += counts[P];
            }
            P--;
        }
    }

    cout << ans << endl;

    return 0;
}