#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;

bool isSubsequence(const string& a, const string& b) {
    int i = 0;
    for (char c : b) {
        if (i < a.size() && c == a[i]) {
            i++;
        }
    }
    return i == a.size();
}

string longestSubsequence(const vector<string>& S, int K) {
    int N = S.size() - 1;
    string ans;
    for (int i = N; i >= 0; i--) {
        string subseq = "";
        for (int j = 0; j < (1 << i); j++) {
            subseq.push_back(S[i][j]);
        }
        int count = 0;
        for (const string& str : S) {
            if (isSubsequence(subseq, str)) {
                count++;
            }
        }
        if (count >= K) {
            ans = subseq;
        }
    }
    return ans;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<string> S(N + 1);
    for (int i = 0; i <= N; i++) {
        cin >> S[i];
    }
    string result = longestSubsequence(S, K);
    cout << result << endl;
    return 0;
}