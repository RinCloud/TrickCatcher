#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

typedef long long ll;

struct Operation {
    ll number;
    ll cost;

    Operation(ll n, ll c): number(n), cost(c) {}
};

ll solve(ll n, ll a, ll b, ll c, ll d) {
    // Dynamic programming table to store the minimum cost to reach each number
    vector<ll> dp(n + 1, LLONG_MAX);

    // Set the initial conditions
    dp[0] = 0;
    dp[1] = d;

    // Priority queue to store the numbers and their costs
    priority_queue<Operation, vector<Operation>, function<bool(Operation, Operation)>> pq([](const Operation& op1, const Operation& op2) -> bool {
        return op1.cost > op2.cost;
    });

    // Push the initial operation
    pq.push(Operation(1, d));

    while (!pq.empty()) {
        Operation current = pq.top();
        pq.pop();

        // If we have already reached the desired number, return the cost
        if (current.number == n) {
            return current.cost;
        }

        // Multiply the number by 2 and update the cost
        ll newNumber = current.number * 2;
        ll newCost = current.cost + a;
        if (newNumber <= n && newCost < dp[newNumber]) {
            dp[newNumber] = newCost;
            pq.push(Operation(newNumber, newCost));
        }

        // Multiply the number by 3 and update the cost
        newNumber = current.number * 3;
        newCost = current.cost + b;
        if (newNumber <= n && newCost < dp[newNumber]) {
            dp[newNumber] = newCost;
            pq.push(Operation(newNumber, newCost));
        }

        // Multiply the number by 5 and update the cost
        newNumber = current.number * 5;
        newCost = current.cost + c;
        if (newNumber <= n && newCost < dp[newNumber]) {
            dp[newNumber] = newCost;
            pq.push(Operation(newNumber, newCost));
        }

        // Increase the number by 1 and update the cost
        newNumber = current.number + 1;
        newCost = current.cost + d;
        if (newNumber <= n && newCost < dp[newNumber]) {
            dp[newNumber] = newCost;
            pq.push(Operation(newNumber, newCost));
        }

        // Decrease the number by 1 and update the cost
        newNumber = current.number - 1;
        newCost = current.cost + d;
        if (newNumber >= 0 && newCost < dp[newNumber]) {
            dp[newNumber] = newCost;
            pq.push(Operation(newNumber, newCost));
        }
    }

    return dp[n];
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        ll result = solve(n, a, b, c, d);
        cout << result << endl;
    }

    return 0;
}
