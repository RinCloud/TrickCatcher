#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSubsequence(const string& sub, const string& str) {
    int idx = 0;
    for (char ch : str) {
        if (idx < sub.size() && ch == sub[idx]) {
            idx++;
        }
    }
    return idx == sub.size();
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<string> strings(N + 1);
    for (int i = 0; i <= N; i++) {
        cin >> strings[i];
    }

    int maxCount = 0;
    string result;

    for (char ch = '0'; ch <= '1'; ch++) {
        string sub = string(1, ch);

        do {
            int count = 0;

            for (int i = 0; i <= N; i++) {
                if (isSubsequence(sub, strings[i])) {
                    count++;
                }
            }

            if (count >= K && (result.empty() || sub < result)) {
                result = sub;
            }

        } while (next_permutation(sub.begin(), sub.end()));

    }

    cout << result << endl;

    return 0;
}