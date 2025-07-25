#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item {
    int weight;
    int value;
};

int main() {
    int N, W;
    cin >> N >> W;

    // Read the items
    vector<Item> items(N);
    for (int i = 0; i < N; i++) {
        cin >> items[i].weight >> items[i].value;
    }

    // Sort the items in increasing order of weight
    sort(items.begin(), items.end(), [](const Item& a, const Item& b) {
        return a.weight < b.weight;
    });

    // Initialize the maximum value array
    vector<int> dp(W + 1, 0);

    // Loop over the items and weights
    for (int i = 0; i < N; i++) {
        for (int j = W; j >= items[i].weight; j--) {
            // Update the maximum value
            dp[j] = max(dp[j], dp[j - items[i].weight] + items[i].value);
        }
    }

    // Print the maximum possible total value
    cout << dp[W] << endl;

    return 0;
}
