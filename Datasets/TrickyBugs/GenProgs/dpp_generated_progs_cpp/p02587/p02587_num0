#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPalindrome(string s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    
    vector<string> strings(N);
    vector<long long> costs(N);
    for (int i = 0; i < N; i++) {
        cin >> strings[i] >> costs[i];
    }
    
    long long minCost = 1e18;
    for (int i = 0; i < N; i++) {
        if (isPalindrome(strings[i])) {
            minCost = min(minCost, costs[i]);
        }
        for (int j = 0; j < N; j++) {
            string s = strings[i] + strings[j];
            string rev_s = s;
            reverse(rev_s.begin(), rev_s.end());
            if (s == rev_s) {
                minCost = min(minCost, costs[i] + costs[j]);
            }
        }
    }
    
    if (minCost == 1e18) {
        cout << -1 << endl;
    } else {
        cout << minCost << endl;
    }
    
    return 0;
}