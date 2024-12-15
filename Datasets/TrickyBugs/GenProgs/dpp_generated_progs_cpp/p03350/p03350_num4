#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
#include <unordered_map>
#include <climits>

using namespace std;

vector<string> S;

// Function to check if a string is a subsequence of K or more different strings in S
bool isValid(string& str, int K) {
    int count = 0;
    for (string& s : S) {
        int i = 0, j = 0;
        while (i < s.length() && j < str.length()) {
            if (s[i] == str[j]) {
                j++;
            }
            i++;
        }
        if (j == str.length()) {
            count++;
        }
        if (count >= K) {
            return true;
        }
    }
    return false;
}

// Function to find the lexicographically smallest string among the longest strings that are subsequences of K or more different strings in S
string findLexSmallest(int N, int K) {
    unordered_map<string, bool> memo;

    for (int i = N; i >= 0; i--) {
        for (int j = 0; j < (1 << i); j++) {
            string str(i, '0');
            for (int k = 0; k < i; k++) {
                str[k] = ((j >> k) & 1) + '0';
            }
            bool isSubsequence = isValid(str, K);

            if (isSubsequence) {
                memo[str] = true;
            } else {
                memo[str] = false;
            }
        }
    }

    string result = "";
    for (int i = 0; i < N; i++) {
        result.push_back('1');
    }

    for (int i = 0; i < (1 << N); i++) {
        string str(N, '0');
        for (int j = 0; j < N; j++) {
            str[j] = ((i >> j) & 1) + '0';
        }
        if (memo[str]) {
            if (str < result) {
                result = str;
            }
        }
    }

    return result;
}

int main() {
    int N, K;
    cin >> N >> K;
    S.resize(N + 1);
    for (int i = 0; i <= N; i++) {
        cin >> S[i];
    }
    string res = findLexSmallest(N, K);
    cout << res << endl;
    return 0;
}