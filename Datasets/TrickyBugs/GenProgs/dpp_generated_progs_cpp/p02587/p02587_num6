#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);
    vector<long long> C(N);

    for (int i = 0; i < N; i++) {
        cin >> S[i] >> C[i];
    }

    int min_cost = INT_MAX;

    for (int i = 0; i < N; i++) {
        string s = S[i];
        long long cost = C[i];

        int len = s.size();
        string reversed_s = s;
        reverse(reversed_s.begin(), reversed_s.end());

        bool is_palindrome = false;

        for (int j = 0; j < len; j++) {
            if (s[j] == reversed_s[j]) {
                is_palindrome = true;
                break;
            }
        }

        if (is_palindrome) {
            min_cost = min(min_cost, cost);
        }
    }

    if (min_cost == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << min_cost << endl;
    }

    return 0;
}