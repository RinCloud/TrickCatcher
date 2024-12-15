#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

string findLongestSubsequence(vector<string>& S, int K) {
    int N = S.size() - 1;
    unordered_map<string, int> count;

    for (int i = 0; i < S.size(); i++) {
        int len = S[i].size();
        for (int mask = 0; mask < (1 << len); mask++) {
            string subseq = "";
            for (int j = 0; j < len; j++) {
                if (mask & (1 << j)) {
                    subseq += S[i][j];
                }
            }
            count[subseq]++;
        }
    }

    string longest = "";
    for (auto it : count) {
        if (it.second >= K && (longest == "" || it.first < longest)) {
            longest = it.first;
        }
    }
    return longest;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<string> S(N + 1);
    for (int i = 0; i <= N; i++) {
        cin >> S[i];
    }
    string result = findLongestSubsequence(S, K);
    cout << result << endl;
    return 0;
}
