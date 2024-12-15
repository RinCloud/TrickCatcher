#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool isSubsequence(string A, string B) {
    int n = A.length();
    int m = B.length();
    int j = 0;
    for (int i = 0; i < m && j < n; i++) {
        if (A[j] == B[i])
            j++;
    }
    return (j == n);
}

bool compareStrings(string a, string b) {
    if (a.length() != b.length())
        return a.length() < b.length();
    return a < b;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<string> S(N + 1);
    for (int i = 0; i <= N; i++)
        cin >> S[i];
    
    vector<string> subsequences;
    for (int mask = 0; mask < (1 << N); mask++) {
        string sub;
        for (int i = 0; i < N; i++) {
            if (mask & (1 << i))
                sub += S[i];
        }
        subsequences.push_back(sub);
    }
    
    sort(subsequences.begin(), subsequences.end(), compareStrings);
    
    int m = subsequences.size();
    vector<int> count(m, 0);
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            if (isSubsequence(subsequences[i], subsequences[j]))
                count[i]++;
        }
    }
    
    string ans = "";
    for (int i = 0; i < m; i++) {
        if (count[i] >= K) {
            ans = subsequences[i];
            break;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}