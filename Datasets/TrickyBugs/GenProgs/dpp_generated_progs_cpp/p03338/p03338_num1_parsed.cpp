#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int ans = 0;
    for (int i = 1; i < N; i++) {
        unordered_set<char> set1;
        unordered_set<char> set2;
        for (int j = 0; j < N; j++) {
            if (j < i) {
                set1.insert(S[j]);
            } else {
                set2.insert(S[j]);
            }
        }
        int count = 0;
        for (auto c : set1) {
            if (set2.count(c)) {
                count++;
            }
        }
        ans = max(ans, count);
    }

    cout << ans << endl;

    return 0;
}