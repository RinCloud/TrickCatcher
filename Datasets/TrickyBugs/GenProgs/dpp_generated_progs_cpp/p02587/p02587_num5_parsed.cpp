#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string, int>> strings(n);
    for (int i = 0; i < n; i++) {
        cin >> strings[i].first >> strings[i].second;
    }

    // Initialize the minimum cost as infinity
    long long min_cost = 1e18;

    // For every substring from i to j, check if it is a palindrome
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            string combined = strings[i].first + strings[j].first;
            // Check if the combined string is a palindrome
            string reversed = combined;
            reverse(reversed.begin(), reversed.end());
            if (reversed == combined) {
                // Calculate the cost of using this palindrome combination of strings
                long long cost = 0;
                for (int k = i; k <= j; k++) {
                    cost += strings[k].second;
                }
                // Update the minimum cost if this combination has a lower cost
                min_cost = min(min_cost, cost);
            }
        }
    }

    // If no palindrome combination is found, print -1
    if (min_cost == 1e18) {
        cout << -1 << endl;
    } else {
        cout << min_cost << endl;
    }

    return 0;
}