#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Custom structure to represent each item
struct Item {
    int weight;
    int value;
};

// Function to solve the problem
int knapsack(int N, int W, vector<Item>& items) {
    // 2D array to store the maximum value
    // that can be obtained with the given weight limit
    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));
    
    // Iterate over each item
    for (int i = 1; i <= N; i++) {
        // Iterate over each possible weight
        for (int w = 1; w <= W; w++) {
            // Check if the current item can be included
            if (items[i].weight <= w) {
                // Compute the maximum value by either including or excluding the item
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - items[i].weight] + items[i].value);
            } else {
                // If the current item cannot be included, the maximum value is the same as the previous item
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    
    // Return the maximum value for the given weight limit
    return dp[N][W];
}

int main() {
    // Read the input values
    int N, W;
    cin >> N >> W;
    
    // Create a vector to store the items
    vector<Item> items(N + 1);
    
    // Read the weight and value of each item
    for (int i = 1; i <= N; i++) {
        cin >> items[i].weight >> items[i].value;
    }
    
    // Compute the maximum possible total value of the selected items
    int result = knapsack(N, W, items);
    
    // Print the result
    cout << result << endl;
    
    return 0;
}