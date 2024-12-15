#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

// Function to find the minimum number of coins required to reach N
long long findMinCoins(long long N, long long A, long long B, long long C, long long D)
{
    // Initialize a vector dp of size N+1 with maximum possible coin requirement
    vector<long long> dp(N + 1, LLONG_MAX);

    // Base case: minimum number of coins required to reach 0 is 0
    dp[0] = 0;

    // Use a priority queue to store the state of each position and its cost
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
    pq.push({0, 0});

    // Iterate until the priority queue is empty
    while (!pq.empty())
    {
        // Get the position and cost from the top of the priority queue
        long long pos = pq.top().first;
        long long cost = pq.top().second;
        pq.pop();

        // Check if the current position is already visited with a smaller cost
        if (cost > dp[pos])
            continue;

        // Perform the multiply by 2 operation
        long long newPos = pos * 2;
        long long newCost = cost + A;
        if (newPos <= N && newCost < dp[newPos])
        {
            dp[newPos] = newCost;
            pq.push({newPos, newCost});
        }

        // Perform the multiply by 3 operation
        newPos = pos * 3;
        newCost = cost + B;
        if (newPos <= N && newCost < dp[newPos])
        {
            dp[newPos] = newCost;
            pq.push({newPos, newCost});
        }

        // Perform the multiply by 5 operation
        newPos = pos * 5;
        newCost = cost + C;
        if (newPos <= N && newCost < dp[newPos])
        {
            dp[newPos] = newCost;
            pq.push({newPos, newCost});
        }

        // Perform the increase or decrease by 1 operation
        newPos = pos + 1;
        newCost = cost + D;
        if (newPos <= N && newCost < dp[newPos])
        {
            dp[newPos] = newCost;
            pq.push({newPos, newCost});
        }

        newPos = pos - 1;
        newCost = cost + D;
        if (newPos >= 0 && newCost < dp[newPos])
        {
            dp[newPos] = newCost;
            pq.push({newPos, newCost});
        }
    }

    // Return the minimum number of coins required to reach N
    return dp[N];
}

int main()
{
    // Read the number of testcases
    long long T;
    cin >> T;

    while (T--)
    {
        // Read the values for the current testcase
        long long N, A, B, C, D;
        cin >> N >> A >> B >> C >> D;

        // Find the minimum number of coins required to reach N
        long long minCoins = findMinCoins(N, A, B, C, D);

        // Print the result
        cout << minCoins << endl;
    }

    return 0;
}