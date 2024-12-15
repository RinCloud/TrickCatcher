#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
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
    
    long long minCost = -1;
    
    for (int bitmask = 0; bitmask < (1 << N); bitmask++) {
        string s;
        long long cost = 0;
        for (int i = 0; i < N; i++) {
            if (bitmask & (1 << i)) {
                s += strings[i];
                cost += costs[i];
            }
        }
        if (isPalindrome(s)) {
            if (minCost == -1 || cost < minCost) {
                minCost = cost;
            }
        }
    }
    
    cout << minCost << endl;
    
    return 0;
}