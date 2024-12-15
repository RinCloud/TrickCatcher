#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;

// Function to find the minimum number of coins required to reach N
long long minimumCoins(int N, int A, int B, int C, int D) {
    // Initialize a vector to store the minimum number of coins required to reach each number
    vector<long long> minCoins(N + 1, numeric_limits<long long>::max());
    minCoins[0] = 0; // Number of coins required to reach 0 is 0

    // Initialize a priority queue to store the current number and the number of coins required to reach that number
    priority_queue<pair<int, long long>, vector<pair<int, long long>>, greater<pair<int, long long>>> pq;

    pq.push({0, 0}); // Push the starting number (0) with 0 coins required

    while (!pq.empty()) {
        int currNum = pq.top().first;
        long long currCoins = pq.top().second;
        pq.pop();

        if (currNum == N) {
            return currCoins; // Return the minimum number of coins required to reach N
        }

        // Multiply the current number by 2 if it doesn't exceed N
        if ((long long)currNum * 2 <= N && currCoins + A < minCoins[currNum * 2]) {
            minCoins[currNum * 2] = currCoins + A;
            pq.push({currNum * 2, currCoins + A});
        }

        // Multiply the current number by 3 if it doesn't exceed N
        if ((long long)currNum * 3 <= N && currCoins + B < minCoins[currNum * 3]) {
            minCoins[currNum * 3] = currCoins + B;
            pq.push({currNum * 3, currCoins + B});
        }

        // Multiply the current number by 5 if it doesn't exceed N
        if ((long long)currNum * 5 <= N && currCoins + C < minCoins[currNum * 5]) {
            minCoins[currNum * 5] = currCoins + C;
            pq.push({currNum * 5, currCoins + C});
        }

        // Increase the current number by 1 if it doesn't exceed N
        if (currNum + 1 <= N && currCoins + D < minCoins[currNum + 1]) {
            minCoins[currNum + 1] = currCoins + D;
            pq.push({currNum + 1, currCoins + D});
        }

        // Decrease the current number by 1 if it doesn't become negative
        if (currNum - 1 >= 0 && currCoins + D < minCoins[currNum - 1]) {
            minCoins[currNum - 1] = currCoins + D;
            pq.push({currNum - 1, currCoins + D});
        }
    }

    return -1; // If it's not possible to reach N, return -1
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N, A, B, C, D;
        cin >> N >> A >> B >> C >> D;

        long long minNumOfCoins = minimumCoins(N, A, B, C, D);
        cout << minNumOfCoins << endl;
    }

    return 0;
}
