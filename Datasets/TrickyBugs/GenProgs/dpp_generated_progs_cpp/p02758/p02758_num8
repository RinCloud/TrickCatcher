#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 998244353

using namespace std;

// function to find number of possible sets of robots
long long findPossibleSets(vector<pair<int,int>>& robots) {
    int n = robots.size();

    // sorting robots array based on their positions
    sort(robots.begin(), robots.end());

    // storing rightmost reachable position for each robot in an array
    vector<int> rightmost(n);
    for (int i = n-1; i >= 0; i--) {
        rightmost[i] = robots[i].first + robots[i].second;

        // finding rightmost reachable position including
        // activated robots within its range
        int idx = upper_bound(robots.begin(), robots.end(), make_pair(rightmost[i], 0)) - robots.begin();
        if (idx != n) {
            rightmost[i] = max(rightmost[i], rightmost[idx]);
        }
    }

    // storing leftmost reachable position for each robot in an array
    vector<int> leftmost(n);
    for (int i = 0; i < n; i++) {
        leftmost[i] = robots[i].first;

        // finding leftmost reachable position including
        // activated robots within its range
        int idx = lower_bound(robots.begin(), robots.end(), make_pair(robots[i].first + 1, 0)) - robots.begin() - 1;
        if (idx >= 0) {
            leftmost[i] = min(leftmost[i], leftmost[idx]);
        }
    }

    // initializing count variable
    long long count = 1;

    // counting number of activated robots which can reach rightmost position
    int curr = n-1;
    for (int i = n-1; i >= 0; i--) {
        while (curr >= 0 && rightmost[i] <= robots[curr].first) {
            curr--;
        }

        // adding count of activated robots to the total count
        count = (count + (curr-i)) % MOD;
    }

    // counting number of activated robots which can reach leftmost position
    curr = 0;
    for (int i = 0; i < n; i++) {
        while (curr < n && leftmost[i] >= robots[curr].first + robots[curr].second) {
            curr++;
        }

        // adding count of activated robots to the total count
        count = (count + (curr-i)) % MOD;
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> robots(n);
    for (int i = 0; i < n; i++) {
        cin >> robots[i].first >> robots[i].second;
    }

    // finding number of possible sets of robots
    long long possibleSets = findPossibleSets(robots);

    cout << possibleSets << endl;

    return 0;
}