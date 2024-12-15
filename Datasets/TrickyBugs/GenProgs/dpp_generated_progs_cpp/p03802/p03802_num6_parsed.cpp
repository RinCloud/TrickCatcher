#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(int mid, const vector<pair<int, int>>& flags) {
    int n = flags.size();
    int prev = flags[0].first;
    for (int i = 1; i < n; i++) {
        if (max(prev + mid, flags[i].second) < flags[i].first) {
            return false;
        }
        prev = max(prev + mid, flags[i].first);
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> flags;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        flags.push_back({x, y});
    }
    
    sort(flags.begin(), flags.end());
    
    int left = 0, right = 1e9;
    while (right - left > 1) {
        int mid = (left + right) / 2;
        if (check(mid, flags)) {
            left = mid;
        } else {
            right = mid;
        }
    }
    
    cout << left << endl;
    
    return 0;
}