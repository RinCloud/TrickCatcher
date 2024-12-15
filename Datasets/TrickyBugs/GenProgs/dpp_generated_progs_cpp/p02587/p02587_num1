#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPalindrome(string s) {
    int n = s.length();
    for (int i = 0; i < n/2; i++) {
        if (s[i] != s[n-i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    
    vector<string> strings(n);
    vector<long long> costs(n);
    
    for (int i = 0; i < n; i++) {
        cin >> strings[i] >> costs[i];
    }
    
    long long ans = 1e18;
    
    for (int mask = 0; mask < (1<<n); mask++) {
        string left, right;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            if ((mask>>i) & 1) {
                sum += costs[i];
                left += strings[i];
            } else {
                right += strings[i];
            }
        }
        reverse(right.begin(), right.end());
        string s = left + right;
        if (isPalindrome(s)) {
            ans = min(ans, sum);
        }
    }
    
    if (ans == 1e18) {
        ans = -1;
    }
    
    cout << ans << endl;
    
    return 0;
}